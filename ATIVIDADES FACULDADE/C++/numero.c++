#include <iostream>
using namespace std; 

int main(){
    int num;
    cout<<"digite o valor do numero:";
    cin>>num;

    if(num >80){
        cout<<"maior que 80";
    }
    if(num == 40){
        cout<<"igual a 40";
    }
    if(num < 25){
        cout<<"menor que 25";
    }
    else{
        if(num>40 && num <80){
            cout<<"maior que 40 e menor que 80";
        }
        else{
            cout<<"maior que 25 e menor que 40";
        }

        
        
        
        
    }
}