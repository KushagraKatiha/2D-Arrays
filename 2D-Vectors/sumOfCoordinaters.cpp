#include<iostream>
#include<vector>
using namespace std;
// Function to print the sum
void printSumOfCoordinates(vector<vector<int>> v, int row, int col, int l1, int r1, int l2, int r2){
    int sum = 0;

    for(int i = l1; i <= l2; i++){
        for(int j = r1; j <= r2; j++){
            sum += v[i][j];
        }
    }

    cout<<"Sum according to given coordinates is: "<<sum;
}

// Method second: Pre-Calculating the horizontal sum for each row in the matrix
void printSumOfCoordinatesMethod2(vector<vector<int>> &v, int row, int col, int l1, int r1, int l2, int r2){
    
    int sum = 0;

    for(int i = 0; i < row; i++){
        for(int j = 1; j < col; j++){
            v[i][j] += v[i][j-1];
        }
    }

    for(int i = l1; i <= l2; i++){
        if(r1 != 0){
            sum += (v[i][r2] - v[i][r1-1]);  
        }else{
            sum += v[i][r2];
        }
    }

    cout<<"Required sum is: "<<sum<<endl;

}

// Method three: Prefix sum over columns and rows both
void printSumOfCoordinatesMethod3(vector<vector<int>> &v, int row, int col, int l1, int r1, int l2, int r2){
    int sum = 0;

    for(int i = 0; i < row; i++){
        for(int j = 1; j < col; j++){
            v[i][j] += v[i][j-1];
        }
    }

    for(int i = 1; i < row; i++){
        for(int j = 0; j < col; j++){
            v[i][j] += v[i-1][j];
        }
    }

    // Printing the created matrix
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    int top = 0;
    if(l1 != 0) top = v[l1-1][r2];

    int left = 0;
    if(r1 != 0) left = v[l2][r1-1];

    int top_left_sum = 0;
    if(l1 != 0 && r1 != 0) top_left_sum = v[l1-1][r1-1];

    sum += v[l2][r2] - top - left + top_left_sum;

    cout<<"Required Sum is: "<<sum<<endl;

}    
int main(){
    // Given a matrix 'a' of dimension nxm and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1, r1) to (l2, r2)
    int row, col;
    cout<<"Enter row and column number: ";
    cin>>row>>col;

    vector<vector<int>> matrix(row, vector<int>(col));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"Input matrix is : "<<endl;
    // Printing the input matrix 
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter l1 and r1: ";
    int l1, r1; cin>>l1>>r1;
    cout<<"Enter l2 and r2: ";
    int l2, r2; cin>>l2>>r2;

    // printSumOfCoordinates(matrix, row, col, l1, r1, l2, r2);
    // printSumOfCoordinatesMethod2(matrix, row, col, l1, r1, l2, r2);
    printSumOfCoordinatesMethod3(matrix, row, col, l1, r1, l2, r2);

    return 0;
}