#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Initialize a 2D vector of size nxm
    int n , m ;
    n = 3; m = 4;
    vector<vector<int>> V(n, vector<int>(m, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<V[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}