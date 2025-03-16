#include <iostream>
using namespace std; 

int main(){
    float dinheiroPagar, precoLitro;

    cout<<"digite o valor do litro da gasolina:";
    cin>>precoLitro;
    cout<<"quantos reais voce vai colocar de gasolina:";
    cin>>dinheiroPagar;

    int litros = dinheiroPagar/precoLitro;
    cout<<"voce vai ter "<<litros<<" litros";
}