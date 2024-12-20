#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> rotate_image(vector<vector<int>>&matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> rotated(n,vector<int>(m,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            rotated[j][n-i-1]=matrix[i][j];
        }
    }
    return rotated;
}

void rotate_image_2(vector<vector<int>>&matrix){
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


}



int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
        };
        // vector<vector<int>> rotated = rotate_image(matrix);
        // for(int i=0;i<rotated.size();i++){
        //     for(int j=0;j<rotated[0].size();j++){
        //         cout<<rotated[i][j]<<" ";
        //         }
        //         cout<<endl;
        //         }

                cout<<endl;

        rotate_image_2(matrix);

            for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
                }

    return 0;
}