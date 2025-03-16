#include <iostream>
using namespace std;

int main(){
    float valorPago, precoProduto, trocoProduto;

    cout<<"digite o valor pago do produto: ";
    cin>> valorPago;
    cout<<"digite o valor do produto :";
    cin >> precoProduto;
      
    trocoProduto = valorPago - precoProduto;

    cout<<"O troco eh de:"<<trocoProduto;


    if (valorPago < precoProduto){
        cout<<"\nO seu dinheiro eh insuficiente para pagar";
    }
    if (valorPago == precoProduto){
        cout<<"Nao vai ter troco";
    }






    


}
