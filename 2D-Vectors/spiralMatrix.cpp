#include<iostream>
#include<vector>
using namespace std;

// Function to print matrix in spiral order
void printSpiral(vector<vector<int>> v, int row, int col){
    int direction = 0;
    int left = 0;
    int right = col-1;
    int top = 0;
    int bottom = row-1;

    while(left <= right && top <= bottom){
        
        if(direction == 0){
            for(int i = left; i <= right; i++){
                cout<<v[top][i]<<" ";
            }
            top++;
        }else if(direction == 1){
            for(int i = top; i <= bottom; i++){
                cout<<v[i][right]<<" ";
            }
            right--;
        }else if(direction == 2){
            for(int i = right; i >= left; i--){
                cout<<v[bottom][i]<<" ";
            }
            bottom--;
        }else if(direction == 3){
            for(int i = bottom; i >= top; i--){
                cout<<v[i][left]<<" ";
            }
            left++;
        }
        direction = (direction+1) % 4;
    }
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