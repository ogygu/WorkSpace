#include <iostream>
using namespace std; 

int main(){
    int matNum[5][5];
    int i, j;

    for(i = 0; i<= 4; i++){
        for(j = 0; j<= 4; j++){
            matNum[i][j] = i*j;
        }
    }

    for(i = 0; i <= 4; i++){
        for(j = 0; j<= 4; j++){
            cout<<matNum[i][j]<<"|";
        }

        cout<<endl<<"-----------"<<endl;
    }
}