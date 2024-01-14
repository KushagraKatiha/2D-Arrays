#include<iostream>
using namespace std;

int main(){
    // Taking user input for the matrix
    int row, col;
    cout<<"Enter row size: "; cin>>row;
    cout<<"Enter column size: "; cin>>col;

    int mat[row][col];

    cout<<"Enter elements of the matrix => ";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>mat[i][j];        
        }
    }

    // Printing the input matrix
    cout<<"Given matrix is: "<<endl;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // Taking the transpose matrix
    // Initializing the new transpose matrix

    int tMat[col][row];
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            tMat[i][j] = mat[j][i];
        }
    }

    // Printing transpose matrix
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            cout<<tMat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}