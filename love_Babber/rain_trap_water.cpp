// Trapping Rain Water Problem – Tutorial with Illustrations
// Last Updated : 07 Apr, 2025
// Trapping Rainwater Problem states that given an array of n non-negative integers arr[] representing an elevation map where the width of each bar is 1, compute how much water it can trap after rain.

// Trapping Rainwater Problem
// Trapping Rainwater Problem

// Examples:  

// Input: arr[] = [3, 0, 1, 0, 4, 0, 2]
// Output: 10
// Explanation: The expected rainwater to be trapped is shown in the above image.


// Input: arr[] = [3, 0, 2, 0, 4]
// Output: 7
// Explanation: We trap 0 + 3 + 1 + 3 + 0 = 7 units.


// Input: arr[] = [1, 2, 3, 4]
// Output
// Explanation: We cannot trap water as there is no height bound on both sides

#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&arr){
    int left=1;
    int right=arr.size()-2;
    
    int lmax=arr[left-1];
    int rmax=arr[right+1];
    int res=0;

    while(left<=right){

        if(lmax<=rmax){
            res+=max(0,lmax-arr[left]);
            lmax=max(lmax,arr[lmax]);

            left++;
        }

        else{
            res+=max(0,rmax-arr[right]);
            rmax=max(arr[right],rmax);
            right--;
        }
    }

    return res;
}

int main(){

    vector<int>arr={3, 0, 2, 0, 4};
    cout<<find(arr);
    return 0;
}
