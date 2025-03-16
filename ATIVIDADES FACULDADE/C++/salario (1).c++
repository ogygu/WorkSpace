#include <iostream>
using namespace std;

int main(){
    float salario, valorTotal_vendas, percentual,divisaoPercentual, comissao, salarioTotal;
    
    cout<<"digite o salario de joao: ";
    cin>> salario;
    cout<<"digite o valor total das vendas de joao: ";
    cin>> valorTotal_vendas;
    cout<<"digite o percentual de comisao: ";
    cin>> percentual;

    divisaoPercentual = (percentual/100);
    comissao =(divisaoPercentual * valorTotal_vendas);
    salarioTotal = comissao + salario;

    cout<<"O salario de joao eh: "<<salarioTotal;
    



}