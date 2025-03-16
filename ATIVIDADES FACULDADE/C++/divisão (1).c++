#include <iostream>
using namespace std; 

int main(){
    int x,y,divisao, resto;

    cout<<"digite o valor de X: ";
    cin>> x;
    cout<<"digite o valor de Y:";
    cin>> y;

    divisao = x/y;
   
    if (x == 0 || y == 0){
        cout<<"nao eh possivel fazer a divisao";
        
    }


    resto = x%y; 

    cout<<"o valor da divisao eh: "<<divisao;
    cout<<"\no valor do resto eh:"<<resto;



}

