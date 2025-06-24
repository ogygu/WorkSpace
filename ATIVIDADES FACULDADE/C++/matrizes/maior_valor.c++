#include <iostream>
using namespace std; 

int main(){
    int matNum[4][4];
    int i, j;
    int maiorNum = 0;

    for(i = 0; i<= 3; i++){
        for(j = 0; j<= 3; j++){
            cout<<"Digite o numero na linha "<<i<<" da coluna "<< j<<" :";
            cin>>matNum[i][j];

        }
        cout<<"-----------------------------"<<endl;
    }

    for(i = 0; i<= 3; i++){
        for(j = 0; j<= 3; j++){
            if(matNum[i][j] > 0){
                maiorNum = matNum[i][j];
            }
        }
    }

    cout<<"O maior numero eh: "<<maiorNum;



}