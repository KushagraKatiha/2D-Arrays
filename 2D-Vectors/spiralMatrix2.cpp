#include<iostream>
#include<vector>
using namespace std;

// Function to make a required matrix
vector<vector<int>> spiralMatrix(vector<vector<int>> &v, int size){

    vector<vector<int>> matrix(size, vector<int>(size));

    int left = 0;
    int right = size-1; 
    int top = 0;
    int bottom = size-1;
    int value = 1;
    
    int direction = 0;

    while(left <= right && top <= bottom){
        if(direction == 0){
            for(int i = left; i <= right; i++){
                matrix[top][i] = value++;
            }
            top++;
        }else if(direction == 1){
            for(int i = top; i <= bottom; i++){
                matrix[i][right] = value++;
            }
            right--;
        }else if(direction == 2){
            for(int i = right; i >= left; i--){
                matrix[bottom][i] = value++;
            }
            bottom--;
        }else if(direction == 3){
            for(int i = bottom; i >= top; i--){
                matrix[i][left] = value++;
            }
            left++;
        }
        direction++;
        direction %= 4;
    }

    return matrix;
}

int main(){
    // Given a positive integer n, generate an nxn matrix filled with elements from 1 to n^2 in spiral order
    int n;
    cout<<"Enter a number: "; cin>>n;

    vector<vector<int>> v; 
    v = spiralMatrix(v, n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}