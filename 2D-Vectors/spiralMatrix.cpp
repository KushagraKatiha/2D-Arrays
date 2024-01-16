#include<iostream>
#include<vector>
using namespace std;

// Function to print matrix in spiral order
void printSpiral(vector<vector<int>> v, int row, int col){
    
}

int main(){
    // Print a matrix in spiral order
    int row, col;
    cout<<"Enter row and column of matrix: ";
    cin>>row>>col;

    vector<vector<int>> v(row, vector<int>(col));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>v[i][j];
        }
    }

    // Print matrix in spiral order
    printSpiral(v, row, col);

    return 0;
}