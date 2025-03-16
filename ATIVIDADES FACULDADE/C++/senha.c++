#include <iostream>
using namespace std; 

int main(){
    string senha;
    cout<<"digite a senha(batatafrita):";
    cin>>senha;

    if(senha == "batafrita"){
        cout<<"senha correta";
    }
    else{
        cout<<"senha incorreta";
    }
}