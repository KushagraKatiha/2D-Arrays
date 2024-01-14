#include<iostream>
using namespace std;

int main(){
    // Initialize a 2-D array of size 4x3

    // int arr[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10, 11, 12}};
    // int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // Taking user input
    int arr[4][3];

    cout<<"Enter array elements: ";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl<<"Array elements are: "<<endl;
    // Printing the array
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}