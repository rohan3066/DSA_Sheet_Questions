#include<bits/stdc++.h>
using namespace std;

pair<int,int>second_smallest_largest(vector<int>arr,int n){
    int large=INT_MIN;
    int slarge=INT_MIN;
    int small=INT_MAX;
    int ssmall=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
        if(arr[i]<small){
            small=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]>slarge && arr[i]!=large){
            slarge=arr[i];
        }
        if(arr[i]<ssmall && arr[i]!=small){
            ssmall=arr[i];
        }
    }

    return {slarge,ssmall};
}

int main(){
    vector<int>arr={1,4,5,3,7,7,8};
    int n=arr.size();
    pair<int,int>ans=second_smallest_largest(arr,n);
    cout<<ans.first<<" "<<ans.second;
    return 0;
}