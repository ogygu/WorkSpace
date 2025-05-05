#include <iostream>
using namespace std; 

int main(){
    int matNum[5][3];
    int i, j;

    for(i = 0; i<= 4; i++){
        for(j = 0; j<= 2; j++){
            matNum[i][j] = 0;
        }
    }

    for(i = 0; i<= 4; i++){
        for(j = 0; j<= 2; j++){
            cout<<matNum[i][j]<<"|";
        }
        cout<<endl<<"------"<<endl;
    }

    //fazendo matriz transposta 

    cout<<"-----------------------"<<endl;
    cout<<"MATRIZ TRANSPOSTA"<<endl;

    for(j = 0; j<= 2; j++){
        for(i = 0; i<= 4; i++){
            cout<<matNum[j][i]<<"|";
        }
        cout<<endl<<"---------"<<endl;
    }



    

}