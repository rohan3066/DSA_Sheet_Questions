#include<bits/stdc++.h>

using namespace std;

vector<int> spiral_matrix(vector<vector<int>>&mat){
    int n=mat.size();
    int m=mat[0].size();
    vector<int>ans;

    int top=0,left=0,right=m-1,bottom=n-1;

    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(mat[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(mat[i][right]);
            
        }
        right--;

        

        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(mat[bottom][i]);
            }

            bottom--;
        }

        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main(){
    vector<vector<int>>mat={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    vector<int>ans=spiral_matrix(mat);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}