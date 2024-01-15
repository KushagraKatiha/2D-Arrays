#include<iostream>
using namespace std;

int main(){
    int row, col;
    row = 3; col = 4;

    int arr[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the input matrix: "<<endl;
    // Printing the input array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int row_num; 
    int one_count = 0;
    for(int i = 0; i < row; i++){
        int one_count_in_row = 0;
        for(int j = 0; j < col; j++){
            if(arr[i][j] == 1){
                one_count_in_row++;
            }
            if(one_count_in_row >= one_count){
                one_count = one_count_in_row;
                row_num = i;
            }
        }
    }

    cout<<"Row with maximum 1s is => "<<row_num<<endl;
    return 0;
}