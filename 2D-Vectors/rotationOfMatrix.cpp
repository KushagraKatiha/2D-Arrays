#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate_matrix_by_90_deg(vector<vector<int>> &v, int row){
    // Function to rotate the matrix by 90 degree without using extra space
    
    // Transposing the matrix
    for(int i = 0; i < row; i++){
        for(int j = 0; j < i; j++){
            swap(v[i][j], v[j][i]);
        }
    }

    // Reversing the matrix
    for(int i = 0; i < row; i++){
        reverse(v[i].begin(), v[i].end());
    }
}

int main(){
    // Given a square matrix, turn it by 90 degrees in a clockwise direction without using any extra space.

    int row;
    cout<<"Enter the row and col number: ";
    cin>>row;

    vector<vector<int>> v(row, vector<int>(row));

    for(int i = 0; i < row; i++){
        for(int j = 0; j < row; j++){
            cin>>v[i][j];
        }
    }

    // Printing the input array 
    cout<<"Matrix input by the user is => "<<endl;; 
    for(int i = 0; i < row; i++){
        for(int j = 0; j < row; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    rotate_matrix_by_90_deg(v, row);

    cout<<"Matrix after rotating by 90 degrees => "<<endl;
    // Printing the matrix after rotation
    for(int i = 0; i < row; i++){
        for(int j = 0; j < row; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}