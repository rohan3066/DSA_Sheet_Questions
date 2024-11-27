#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse_arr(int left,int right,vector<int>&arr){
    if(left>right){
        return;
    }
    swap(arr[left],arr[right]);

    reverse_arr(left+1,right-1,arr);
}

void reverse_one_pointer(int i,vector<int>&arr,int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse_one_pointer(i+1,arr,n);
}




int main(){
    vector<int>arr={4,7,2,1,9};
    int n=arr.size();
    reverse_arr(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse_one_pointer(0,arr,n);

        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}