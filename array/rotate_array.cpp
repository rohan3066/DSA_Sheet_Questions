#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> rotate(vector<vector<int>>&matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>>rotated(n, vector < int > (n, 0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            rotated[j][n-i-1]=matrix[i][j];
        }
    }
    return rotated;
}

vector<vector<int>> rotate1(vector<vector<int>>&matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
           swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }

    return matrix;
    
}

int main(){
    vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>>rotated = rotate1(matrix);
    // vector<vector<int>>rotated1 = rotate1(matrix);
    for(int i=0;i<rotated.size();i++){
        for(int j=0;j<rotated[i].size();j++){
            cout<<rotated[i][j]<<" ";
            }
            cout<<endl;
    }
    return 0;
}