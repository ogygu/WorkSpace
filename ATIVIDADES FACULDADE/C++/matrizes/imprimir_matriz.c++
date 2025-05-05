#include <iostream>
using namespace std; 

int main(){

    int matNum[4][4];
    int i, j;
    int cont = 0;

    for(i = 0; i<=3; i++){
        for(j = 0; j<= 3; j++){
            cout<<"Digite o numero que esta na linha "<<i<<" na coluna "<<j<<" :";
            cin>>matNum[i][j];

        }
        cout<<"----------------------------------------------------------"<<endl;
    }

    for(i = 0; i<=3; i++){
        for(j = 0; j<= 3; j++){
            if(matNum[i][j] > 10){
                cont++;
            }
        }
    }

    for(i = 0; i<=3; i++){
        for(j = 0; j<= 3; j++){
            cout<<matNum[i][j]<<"|";
        }
        cout<<endl<<"--------"<<endl;

        
    }

    cout<<"O numero de numeros maiores que 10 sao: "<<cont;

    

   
 




}