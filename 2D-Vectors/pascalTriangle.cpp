#include<iostream>
#include<vector>
using namespace std;
// Function to find the factorial
int fact(int x){
    int fact = 1;
    for(int i = x; i > 0; i--){
        fact *= i;
    }
    return fact;
}

// Function to find the combinations 
int comb(int n, int r){
    int comb = fact(n)/(fact(r)*fact(n-r));
    return comb;
}

// Function to find pascal elements
vector<vector<int>> pascalTriangle(int rows){
    vector<vector <int>> pascal(rows);

    for(int i = 0; i < rows; i++){
        pascal[i].resize(i+1);
        for(int j = 0; j < i+1; j++){
            pascal[i][j] = comb(i, j); 
        }
    }

    return pascal;
}

int main(){
    int rows; cin>>rows;
    vector<vector<int>> Pt;

    Pt = pascalTriangle(rows);

    for(int i = 0; i < Pt.size(); i++){
        for(int j = 0; j < Pt[i].size(); j++){
            cout<<Pt[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;   
}