#include <iostream>
using namespace std;

int main(){
    int mat_Num[3][3];
    int soma_diagonal = 0;
    int cont_num_par = 0;
    int informar_num;

    int i, j;

    for(i = 0; i<= 2; i++){
        for(j = 0; j<= 2; j++){
        cout<<"digite o numero da linha "<<i<<" da coluna "<<j<<":";
            cin>>mat_Num[i][j];
            cout<<"-----------"<<endl;
        }
    }

    for(i = 0; i<= 2; i++){
        for(j = 0; j<= 2; j++){
            if( i == j){
                soma_diagonal = soma_diagonal + mat_Num[i][j];
            }
        }
    }

    for(i = 0; i<= 2; i++){
        for(j = 0; j<= 2; j++){
            if(mat_Num[i][j]%2 == 0){
                cont_num_par ++;
            }
        }

    }

    cout<<"a soma da diagonal eh: "<<soma_diagonal<<endl;
    cout<<"a quantidade de numeros par: "<<cont_num_par<<endl;

    for(i = 0; i<= 2; i++){
        for(j = 0; j<= 2; j++){
            cout<<"digite um numero :";
            cin>>informar_num;
            cout<<"-----------"<<endl;

            if(informar_num == mat_Num[i][j]){
                cout<<"o numero "<<informar_num<<" esta na linha "<<i<<" e na coluna "<<j<<endl;
            }
            else{
                cout<<"o numero "<<informar_num<<" nao esta na matriz"<<endl;
            }
        }

    }

    for(i = 0; i<= 2; i++){
        for(j = 0; j<= 2; j++){
            cout<<mat_Num[i][j]<<"|";
        }
        cout<<endl<<"-----------------"<<endl;
    }







    

   



}