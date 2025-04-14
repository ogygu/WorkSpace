#include <iostream>
using namespace std;

int main(){
    float vetTemp[12];
    int i;
    float tempMaior = 0;
    float tempMenor = 0;
    float soma = 0;
    float media;
    string mes;
    string menorMes = " ";
    string maiorMes= " ";

    for(i = 0; i<= 4; i++){
        cout<<"Digite o valor da "<<i<<" temperatura : ";
        cin>>vetTemp[i];
        cout<<"Em qual mes: ";
        cin>>mes;
        cout<<"--------------------------------------------"<<endl;
    }
    

    for(i =0; i<= 4; i++){
        if(vetTemp[i]>1){
            tempMaior = vetTemp[i];
            maiorMes = mes;
        }
        if(vetTemp[i]<1 || vetTemp[i]== 0){
            tempMenor = vetTemp[i];
            menorMes = mes;
        }
    }

    for(i =0; i<= 4; i++){
        soma = soma + vetTemp[i];
        

    }
    media = soma/13;

    cout<<"A maior temperatura eh:"<<tempMaior<<" eh do mes de: "<<maiorMes <<endl;
    cout<<"A menor temperatura eh: "<<tempMenor<<" eh do mes de: "<<menorMes <<endl;
    cout<<"A media das temperaturas eh:"<<media<<endl;
    


     
}