#include<iostream>
using namespace std;

int main(){
    // Taking first matrix input
    // Row and Col of first matrix
    int row1, col1;
    cout<<"Enter Row size of first matrix: "; cin>>row1;
    cout<<"Enter Column size of first matrix: "; cin>>col1;
    cout<<endl;

    // Initializing 2D array with given inputs
    int mat1[row1][col1];

    cout<<"Enter elements of first matrix => ";

    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            cin>>mat1[i][j];
        }
    }

    cout<<"First matrix is : "<<endl;
    // Printing first matrix
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // Taking second matrix input
    // Row and Col of second matrix
    int row2, col2;
    cout<<"Enter Row size of second matrix: "; cin>>row2;
    cout<<"Enter Column size of second matrix: "; cin>>col2;
    cout<<endl;

    // Initializing 2D array with given inputs
    int mat2[row2][col2];

    cout<<"Enter elements of second matrix => ";

    for(int i = 0; i < row2; i++){
        for(int j = 0; j < col2; j++){
            cin>>mat2[i][j];
        }
    }

    cout<<"Second matrix is : "<<endl;
    // Printing first matrix
    for(int i = 0; i < row2; i++){
        for(int j = 0; j < col2; j++){
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // Checking if the matrices are multiplicable or not
    if(col1 != row2){
        cout<<"These Matrices can not be multiplied"<<endl;
    }else{
        // Initializing the answer matrix

        int ansMat[row1][col2];

        for(int i = 0; i < row1; i++){
            for(int j = 0; j < col2; j++){
                int ans = 0; 
                for(int k = 0; k < col1; k++){
                    ans += mat1[i][k]*mat2[k][j];
                }        
                ansMat[i][j] = ans;
            }
        }

        // Display the answer matrix
        cout<<"Answer matrix is : "<<endl;
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < col2; j++){
                cout<<ansMat[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}