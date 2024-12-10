#include<bits/stdc++.h>
using namespace std;

void setRow(vector<vector<int>>&matrix,int n,int m,int i){
    for(int j=0;j<m;j++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}
void setCols(vector<vector<int>>&matrix,int n,int m,int j){
    for(int i=0;i<n;i++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}

vector<vector<int>>set_matrix(vector<vector<int>>&matrix,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                setRow(matrix,n,m,i);
                setCols(matrix,n,m,j);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;

}

int main(){
    vector<vector<int>>matrix={
        {1,2,3,0},
        {4,0,6,2},
        {7,8,9,1}
    };
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>>ans=set_matrix(matrix,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}