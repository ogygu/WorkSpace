#include <iostream>
using namespace std; 

int main(){
    int num;
    cout<<"digite o valor de num:";
    cin>>num;
    if(num>0){
        cout<<"maior que zero";
    }
    if(num==0){
        cout<<"igual a zero";
    }
    else{
        cout<<"menor que zero";
    }
}