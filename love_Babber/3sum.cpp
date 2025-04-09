// 3 Sum – Triplet Sum in Array
// Last Updated : 02 Jan, 2025
// Given an array arr[] of size n and an integer sum, the task is to check if there is a triplet in the array which sums up to the given target sum.

// Examples: 

// Input: arr[] = [1, 4, 45, 6, 10, 8], target = 13
// Output: true 
// Explanation: The triplet [1, 4, 8] sums up to 13


// Input: arr[] = [1, 2, 4, 3, 6, 7], target = 10 
// Output: true 
// Explanation: The triplets [1, 3, 6] and [1, 2, 7] both sum to 10. 


// Input: arr[] = [40, 20, 10, 3, 6, 7], sum = 24 
// Output: false
// Explanation: No triplet in the array sums to 24.

#include<bits/stdc++.h>
using namespace std;

bool findSum(vector<int>&arr,int target){
    int n=arr.size();
    sort(arr.begin(),arr.end());

    for(int i=0;i<n-2;i++){
        int l=i+1,r=n-1;

        int req=target-arr[i];

        while(l<r){
            if(arr[l]+arr[r]==req){
                return true;
            }

            if(arr[l]+arr[r]<req){
                l++;
            }

            else if(arr[l]+arr[r]>req){
                r--;
            }
        }

    }

    return false;
}

int main(){

    vector<int>arr={40, 20, 10, 3, 6, 7};
    cout<<findSum(arr,24)<<endl;
    return 0;
}