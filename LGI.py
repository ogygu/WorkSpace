from tkinter import *
from tkinter import ttk
import sqlite3
import random

janela1 = Tk()

class Aplication():
    def __init__(self):
        self.janela1 = janela1
        self.conexaoBanco_deDados()
        self.criarBanco_de_Dados()
        self.telaPrincipal()
        self.frame_telaPrincipal()
        self.botoes_telaPrincipal()

        janela1.mainloop()
    
    def telaPrincipal(self):
        self.janela1.title("LGInvestimentos")
        self.janela1.configure(background=  'gray12')
        self.janela1.geometry("700x500")
        self.janela1.resizable(True, True)
        self.janela1.maxsize(width= 900, height= 800)
        self.janela1.minsize(width = 500, height = 400)

    def frame_telaPrincipal(self):
        self.frame_1 = Frame(self.janela1, bd=4, 
         bg='lightgrey', highlightbackground='black', highlightthickness= 1)
        
        self.frame_1.place(relx= 0.02, rely= 0.02, relwidth= 0.96, 
                           relheight= 0.96)
    
    def botoes_telaPrincipal(self):
        self.bt_criarConta = Button(self.frame_1, text= "Criar Conta", command=self.abrir_tela_criarConta)
        self.bt_criarConta.place(relx= 0.01, rely= 0.12, relwidth= 0.2, relheight= 0.1)

        self.bt_acessarConta = Button(self.frame_1, text= "Acessar Conta", command=self.acessarConta)
        self.bt_acessarConta.place(relx= 0.01, rely= 0.23, relwidth= 0.2, relheight= 0.1)

        self.lb_Titulo = Label(self.frame_1, text= "LCInvestimentos", font=('arial', 20 )) 
        self.lb_Titulo.place(relx= 0.01, rely= 0.01, relwidth= 0.97, relheight= 0.1)
    
    def abrir_tela_criarConta(self):
        self.janelaCriar_Conta = Toplevel(self.janela1)
        self.janelaCriar_Conta.title("Criar Conta")
        self.janelaCriar_Conta.geometry("500x400")
        self.janelaCriar_Conta.resizable(True, True)
        self.janelaCriar_Conta.maxsize(width= 900, height= 800)
        self.janelaCriar_Conta.minsize(width = 500, height = 400)
        self.janelaCriar_Conta.configure(background= 'gray12')

        self.lb_nome = Label(self.janelaCriar_Conta, text= "Nome", bg= 'white', fg= 'black')
        self.lb_nome.place(relx=0.01, rely=0.01,relwidth= 0.1, relheight= 0.05)
        self.entrey_nome = Entry(self.janelaCriar_Conta)
        self.entrey_nome.place(relx= 0.01, rely= 0.07, relwidth= 0.2, relheight= 0.05)

        self.lb_senha = Label(self.janelaCriar_Conta, text= "Senha", bg= 'white', fg= 'black')
        self.lb_senha.place(relx=0.01, rely=0.13,relwidth= 0.1, relheight= 0.05)
        self.entrey_senha = Entry(self.janelaCriar_Conta, show= "*")
        self.entrey_senha.place(relx= 0.01, rely= 0.19, relwidth= 0.2, relheight= 0.05)

        self.bt_numeroConta = Button(self.janelaCriar_Conta, text= "Número da Conta", command=self.numeroConta)
        self.bt_numeroConta.place(relx=0.01, rely=0.26,relwidth= 0.3, relheight= 0.05)

        self.entrey_numeroConta = Entry(self.janelaCriar_Conta)
        self.entrey_numeroConta.place(relx= 0.01, rely= 0.33, relwidth= 0.2, relheight= 0.05)

        self.bt_salvar = Button(self.janelaCriar_Conta, text= "Salvar", command=self.salvarConta)
        self.bt_salvar.place(relx= 0.01, rely= 0.4, relwidth= 0.1, relheight= 0.1)

    def conexaoBanco_deDados(self):
        self.conexao = sqlite3.connect("clientes.db")
        self.cursor = self.conexao.cursor()
    
    def criarBanco_de_Dados(self):
        self.cursor.execute(""" CREATE TABLE IF NOT EXISTS clientes(
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            nome TEXT NOT NULL,
            senha TEXT NOT NULL,
            numero_conta TEXT NOT NULL
             )
        """)
        self.conexao.commit()

    def salvarConta(self):
        nome = self.entrey_nome.get()
        senha = self.entrey_senha.get()
        numero_conta = self.entrey_numeroConta.get()

        self.cursor.execute("""INSERT INTO clientes(nome, senha, numero_conta) VALUES(?,?,?)""", (nome, senha, numero_conta))
        self.conexao.commit()

        print(f"Conta criada para {nome} com senha {senha} e número da conta {numero_conta}")
        self.janelaCriar_Conta.destroy()

    def numeroConta(self):
        conta = random.randint(1000, 9999)
        self.entrey_numeroConta.delete(0, END)
        self.entrey_numeroConta.insert(0, conta)

    def acessarConta(self):
        self.janelaAcessar_Conta = Toplevel(self.janela1)
        self.janelaAcessar_Conta.title("Acessar Conta")
        self.janelaAcessar_Conta.geometry("500x400")
        self.janelaAcessar_Conta.resizable(True, True)
        self.janelaAcessar_Conta.maxsize(width= 900, height= 800)
        self.janelaAcessar_Conta.minsize(width = 500, height = 400)
        self.janelaAcessar_Conta.configure(background= 'gray12')

Aplication()