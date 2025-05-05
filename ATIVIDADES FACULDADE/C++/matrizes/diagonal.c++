#include <iostream>
using namespace std; 

int main(){
    int matNum[5][5];
    int i , j;

    for(i = 0; i< 4; i++){
        for(j = 0; j<4; j++){
            if(i ==j){
                matNum[i][j] = 1;
            }
            else{
                matNum[i][j] = 0;
            }
        }
    }

    for( i =0; i<4; i++){
        for(j=0; j<4; j++){
            cout<<matNum[i][j]<<"|";
            
        }
        cout<<endl<<"---------"<<endl;
    }

}