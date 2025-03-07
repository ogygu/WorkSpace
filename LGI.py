from tkinter import *
from tkinter import ttk
import sqlite3

janela1 = Tk()

class Aplication():
    def __init__(self):
        self.janela1 = janela1
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
        self.bt_criarConta = Button(self.frame_1, text= "Criar Conta")
        self.bt_criarConta.place(relx= 0.01, rely= 0.12, relwidth= 0.2, relheight= 0.1)

        self.bt_acessarConta = Button(self.frame_1, text= "Acessar Conta")
        self.bt_acessarConta.place(relx= 0.01, rely= 0.23, relwidth= 0.2, relheight= 0.1)

        self.lb_Titulo = Label(self.frame_1, text= "LCInvestimentos", font=('arial', 20 )) 
        self.lb_Titulo.place(relx= 0.01, rely= 0.01, relwidth= 0.97, relheight= 0.1)

    

Aplication()
    

    
       
    
        