#include<bits/stdc++.h>
using namespace std;

int last_occurance(vector<int>&arr,int x){
    int n=arr.size();
    int low=0,high=n-1;

    int ans=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==x){
            ans=mid;
            low=mid+1;
        }

        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return ans;
}

int main(){
    vector<int>arr={1,2,3,3,3,3,4,4,5};
    int x=3;
    cout<<last_occurance(arr,x)<<endl;
    return 0;
}