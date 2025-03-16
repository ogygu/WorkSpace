#include <iostream>
using namespace std; 

int main(){
    float x,y;

    cout<<"digite os valores de x e y:\n";
    cin>>x;
    cin>>y;

    if(x>y){
        cout<<"x é maior que y";
    }
    else{
        if(x==y){
            cout<<"os valores sao iguais";

        }
        else{
            cout<<"y eh maior";
        }
    }

    

}