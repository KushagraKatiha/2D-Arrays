#include<iostream>
#include<vector>
using namespace std;

int maximum_1_row_type3(vector<vector<int>> &v, int rows, int cols){
    // Check which row will have the 1 at leftmost index
    int row_num = -1;
    int i, j;
    i = 0;
    j = cols-1;

    while(j >= 0 && v[0][j]){
        if(v[i][j] == 1){
            row_num = 0;
            j--;
        }
    }

    for(int i = 1; i < rows; i++){
        while(j >= 0 && v[i][j] == 1){
            j--;
            row_num = i;
        }
    }
    return row_num;
}

int maximum_1_row_type2(vector<vector<int>> &v, int row, int col){
    // Checking which array will have the 1 at leftmost index
    
    int row_num = -1;
    int num_of_ones = 0; 

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(v[i][j] == 1){
                int number_of_ones = col - j;
                if(number_of_ones > num_of_ones){
                    num_of_ones = number_of_ones;
                    row_num = i;
                }
            }
        }
    }

    return row_num;
}

int maximum_1_row(vector<vector<int>> &v, int row, int col){

    int row_num; 
    int one_count = 0;
    for(int i = 0; i < row; i++){
        int one_count_in_row = 0;
        for(int j = 0; j < col; j++){
            if(v[i][j] == 1){
                one_count_in_row++;
            }
            if(one_count_in_row >= one_count){
                one_count = one_count_in_row;
                row_num = i;
            }
        }
    }
    return row_num;
}

int main(){
    // Given a boolean 2D array, where each row is sorted. Find the row with the maximum number is 1s.
    int row, col;
    cout<<"Enter row and column size: ";
    cin>>row>>col;

    vector<vector<int>> v(row, vector<int>(col));

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>v[i][j];
        }
    }

    cout<<"Printing the input matrix: "<<endl;
    // Printing the input array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    // int row_num = maximum_1_row(v, row, col);
    // int row_num = maximum_1_row_type2(v, row, col);
    int row_num = maximum_1_row_type3(v, row, col);

    cout<<"Row with maximum 1(s) is => "<<row_num<<endl;
    return 0;
}