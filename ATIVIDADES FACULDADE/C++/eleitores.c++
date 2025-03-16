#include <iostream>
using namespace std; 

int main(){
    int totalEL, vBrancos, vNulos, vValidos;
    cout<<"digite o numero total de eleitores, votos brancos, nulos e validos:\n ";
    cin>>totalEL;
    cin>>vBrancos;
    cin>>vNulos;
    cin>>vValidos;

    int porVB = (totalEL*vBrancos)/100;
    int porVN = (totalEL*vNulos)/100 ;
    int porVV = (totalEL*vValidos)/100;

    cout<<"Voto branco: "<<porVB<< " , votos nulos: "<<porVN<<" e votos validos:"<<porVV<<" porcento";
}