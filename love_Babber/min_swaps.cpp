// Minimum swaps required to bring all elements less than or equal to k together
// Last Updated : 17 Dec, 2024
// Given an array of n positive integers and a number k. Find the minimum number of swaps required to bring all the numbers less than or equal to k together. 

// Examples: 

// Input: arr[] = {2, 1, 5, 6, 3}, k = 3
// Output: 1
// Explanation: To bring elements 2, 1, 3 together, swap arr[2] with arr[4].  Final array will be arr[] = {2, 1, 3, 6, 5}


// Input: arr[] = {2, 7, 9, 8, 5, 7, 4}, k = 5
// Output: 1
// Explanation: To bring elements 2, 5 and 4 together, s

#include<bits/stdc++.h>
using namespace std;

int findMinSwap(vector<int>&arr,int k){
    
    int n=arr.size();
    int cnt=0;
    int minSwap=0;

    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            cnt++;
        }
    }

    int bad=0;

    for(int i=0;i<cnt;i++){
        if(arr[i]>k){
            bad++;
        }
    }
    minSwap=bad;

    for(int i=1;i<=n-cnt;i++){
        if(arr[i-1]>k){
            bad--;
        }
        if(arr[i+cnt-1]>k){
            bad++;
        }

        minSwap=min(minSwap,bad);

        
    }


    return minSwap;

}


int main(){

    vector<int>arr={2, 7, 9, 8, 5, 7, 4};
    cout<<findMinSwap(arr,5)<<endl;

    return 0;
}


