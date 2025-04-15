#include <iostream>
using namespace std;

int main(){
    int vetNum[6];
    int i, j;
    
    
   

    for (i = 0; i<=6;i++){
        cout<<"digite o "<<i<<" numero: ";
        cin>>vetNum[i];
       
    }
    for(i = 0; i<=6;i++){
        if(vetNum[i]%2 != 0){
            if(vetNum[i] > 1 && vetNum[i] < 726){ 
                cout<<"O numeros impares acima de 1 e 726 eh: "<<vetNum[i]<<endl; 
            }
        }
        if(vetNum[i]%3==0){
            for( j = 0; j<=6;j++){

            }
            
        }
    }
    cout<<"-------------------------------"<<endl;
    cout<<"os multplos de 3 eh:"<<j;
   
}