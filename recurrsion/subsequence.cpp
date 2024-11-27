#include<bits/stdc++.h>
using namespace std;

void PrintF(int ind,int arr[],vector<int>ans,int n){
    
    if(ind==n){
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";

        }
        cout<<endl;
        return ;
    }

    ans.push_back(arr[ind]);
    PrintF(ind+1,arr,ans,n);
    ans.pop_back();
    PrintF(ind+1,arr,ans,n);
}


int main(){
    int arr[]={3,2,1};
    vector<int>ans;
    int n=3;
    PrintF(0,arr,ans,n);

    return 0;
}