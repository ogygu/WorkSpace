#include <iostream>
using namespace std;

int main(){
    //matriz da esquerda
    int assentos_esquerda[5][3];

    //matriz do meio
    int assentos_meio[5][4];

    //matriz da direita
    int assentos_direita[5][3];

    int i, j;

    int opcao_inicial;
    int opcao_escolha_assento;
    int opcao_cadeira_linha;
    int opcao_cadeira_coluna;
    int cont_assento_esquerdo = 0;
    int cont_assento_direito = 0;
    int cont_assento_meio = 0;

    int cont_assento_nao_ocupado_esquerdo = 0;
    int cont_assento_nao_ocupado_meio = 0;
    int cont_assento_nao_ocupado_direito = 0;

    int cont_assento_Nocupado_corredor_esquerdo = 0;
    int cont_assento_Nocupado_corredor_direito = 0;
    int cont_assento_Nocupado_corredor_meio_1 = 0;
    int cont_assento_Nocupado_corredor_meio_2 = 0;
    int total_assentos_Nocupados_meio;
    
    

    //zerando as matriz da esquerda

    for( i = 0; i<= 4; i++){
        for(j = 0; j<= 2; j++){
            assentos_esquerda[i][j] = 0;
        }
    }
    //zerando as matriz do meio
    for( i = 0; i<= 4; i++){
        for(j = 0; j<= 3; j++){
            assentos_meio[i][j] = 0;
        }
    }

    //zerando as matriz da direita
    for( i = 0; i<= 4; i++){
        for(j = 0; j<= 2; j++){
            assentos_direita[i][j] = 0;
        }
    }

    while (true){
        cout<<"---AGENDAR POLTRONA---"<<endl;
        cout<<"DIGITE:\n(1)-->AGENDAR POLTRONA\n(2)-->SAIR"<<endl;
        cin>>opcao_inicial;
        cout<<"------------------------"<<endl;

        if(opcao_inicial == 2){
            cout<<"Operacao encerrada!"<<endl;
            break;
        }

        if(opcao_inicial==1){
            cout<<"ESCOLHA O ASSENTO:\n(1)-->ESQUERDA\n(2)-->MEIO\n(3)-->DIREITA"<<endl;
            cin>>opcao_escolha_assento;
            cout<<"------------------------"<<endl;

            if(opcao_escolha_assento == 1){

                cout<<"ESCOLHA A LINHA(0-4):"<<endl;
                cin>>opcao_cadeira_linha;

                cout<<"ESCOLHA A COLUNA(0-2):"<<endl;
                cin>>opcao_cadeira_coluna;
                //escolha de assento da esquerda
                if(assentos_esquerda[opcao_cadeira_linha][opcao_cadeira_coluna]==0){
                    assentos_esquerda[opcao_cadeira_linha][opcao_cadeira_coluna]=1;
                    cout<<"ASSENTO AGENDADO COM SUCESSO!"<<endl;
                    cout<<"-----------------------------"<<endl;
                    cont_assento_esquerdo++;
                }
                else{
                    cout<<"ASSENTO JA OCUPADO!"<<endl;
                    cout<<"-----------------------------"<<endl;
                }
            }
            //escolha de assento ao meio
            if(opcao_escolha_assento == 2){
                cout<<"ESCOLHA A LINHA(0-4):"<<endl;
                cin>>opcao_cadeira_linha;

                cout<<"ESCOLHA A COLUNA(0-3):"<<endl;
                cin>>opcao_cadeira_coluna;
                if(assentos_meio[opcao_cadeira_linha][opcao_cadeira_coluna]==0){
                    assentos_meio[opcao_cadeira_linha][opcao_cadeira_coluna]=1;
                    cout<<"ASSENTO AGENDADO COM SUCESSO!"<<endl;
                    cout<<"-----------------------------"<<endl;
                    cont_assento_meio++;
                }
                else{
                    cout<<"ASSENTO JA OCUPADO!"<<endl;
                    cout<<"-----------------------------"<<endl;
                }
              
            }
            //escolha de assento da direita
            if(opcao_escolha_assento == 3){
                cout<<"ESCOLHA A LINHA(0-4):"<<endl;
                cin>>opcao_cadeira_linha;

                cout<<"ESCOLHA A COLUNA(0-2):"<<endl;
                cin>>opcao_cadeira_coluna;
                if(assentos_direita[opcao_cadeira_linha][opcao_cadeira_coluna]==0){
                    assentos_direita[opcao_cadeira_linha][opcao_cadeira_coluna]=1;
                    cout<<"ASSENTO AGENDADO COM SUCESSO!"<<endl;
                    cout<<"-----------------------------"<<endl;
                    cont_assento_direito++;
                }
                else{
                    cout<<"ASSENTO JA OCUPADO!"<<endl;
                    cout<<"-----------------------------"<<endl;
                }


            }  

        }
        

    }

    cout<<"---VIZUALIZAR ASSENTOS---"<<endl;
    cout<<"-----------------------------"<<endl;
   
    cout<<"ASSENTOS DA ESQUERDA:"<<endl;
    cout<<"-----------------------------"<<endl;
    for(i = 0; i<= 4; i++){
        for(j = 0; j<= 2; j++){
            cout<<assentos_esquerda[i][j]<<"|";
            if(assentos_esquerda[i][j]==0){
                cont_assento_nao_ocupado_esquerdo++;
            }
            if(assentos_esquerda[i][j]==0 && ( j==2)){
                cont_assento_Nocupado_corredor_esquerdo++;
            }
        }
        cout<<endl<<"-------"<<endl;
    }

    cout<<"ASSENTOS DO MEIO:"<<endl;
    cout<<"-----------------------------"<<endl;
    for(i = 0; i<= 4; i++){
        for(j = 0; j<= 3; j++){
            cout<<assentos_meio[i][j]<<"|";
            if(assentos_meio[i][j]==0){
                cont_assento_nao_ocupado_meio++;
            }
            if(assentos_meio[i][j]==0 && (j==0 )){
                cont_assento_Nocupado_corredor_meio_1++;
            }
            if(assentos_meio[i][j]==0 && (j==3 )){
                cont_assento_Nocupado_corredor_meio_2++;
            }
            
        }
        cout<<endl<<"-------"<<endl;
    }
    total_assentos_Nocupados_meio = cont_assento_Nocupado_corredor_meio_1 + cont_assento_Nocupado_corredor_meio_2; 

    cout<<"ASSENTOS DA DIREITA:"<<endl;
    cout<<"-----------------------------"<<endl;
    for(i = 0; i<= 4; i++){
        for(j = 0; j<= 2; j++){
            cout<<assentos_direita[i][j]<<"|";
            if(assentos_direita[i][j]==0){
                cont_assento_nao_ocupado_direito++;
            }
            if(assentos_direita[i][j]==0 && (j==0)){
                cont_assento_Nocupado_corredor_direito++;
            }
        }
        cout<<endl<<"-------"<<endl;
    }

    cout<<"------VIZUALIACAO DE QUANTIDADE DE ASSENTOS ------"<<endl;
    cout<<"ASSENTOS A ESQUERDA:"<<cont_assento_esquerdo<<endl;
    cout<<"ASSENTOS AO MEIO:"<<cont_assento_meio<<endl;
    cout<<"ASSENTOS A DIREITA:"<<cont_assento_direito<<endl;
    cout<<"\n";

    cout<<"------VIZUALIACAO DE QUANTIDADE DE ASSENTOS NAO OCUPADOS ------"<<endl;
    cout<<"ASSENTOS A ESQUERDA:"<<cont_assento_nao_ocupado_esquerdo<<endl;
    cout<<"ASSENTOS AO MEIO:"<<cont_assento_nao_ocupado_meio<<endl;
    cout<<"ASSENTOS A DIREITA:"<<cont_assento_nao_ocupado_direito<<endl;
    cout<<"\n";

    cout<<"------VIZUALIACAO DE QUANTIDADE DE ASSENTOS NAO OCUPADOS NO CORREDOR ------"<<endl;
    cout<<"ASSENTOS A ESQUERDA:"<<cont_assento_Nocupado_corredor_esquerdo<<endl;
    cout<<"ASSENTOS AO MEIO:"<<total_assentos_Nocupados_meio<<endl;
    cout<<"ASSENTOS A DIREITA:"<<cont_assento_Nocupado_corredor_direito<<endl;
    cout<<"\n";
    
    

    







}