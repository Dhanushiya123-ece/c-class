#include <iostream>
using namespace std;
int main(){
    int rowsA=0,colsA=0,rowsB=0,colsB=0;
    cout<<"Enter the number of rows and columns in matrix A: "<<endl;
    cin>>rowsA>>colsA;
    cout<<"Enter the number of rows and columns in matrix B: "<<endl;
    cin>>rowsB>>colsB;

    if (colsA != rowsB){
        cout<<"Matrix multiplication is not possible,columns of A must equal rows of B."<<endl;
        return 0;
    }
    int matrixA[2][2], matrixB[2][2], result[2][2];
    for (int i=0;i< 2;i++){
        for(int j=0;j<2;j++){
            result[i][j]=0;
        } 
    }
    cout<<"Enter  elements of matrix A:"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"Enter elements at position: "<<i+1<<j+1;
            cin>>matrixA[i][j];
        }
    }
    cout<<"Enter elements of matrix B: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"Enter the element at position: "<<i+1<<j+1;
            cin>>matrixB[i][j];
        }
    }

}