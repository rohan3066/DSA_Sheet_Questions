// Maximum Subarray Sum – Kadane’s Algorithm
// Last Updated : 28 Feb, 2025
// Given an array arr[], the task is to find the subarray that has the maximum sum and return its sum.

// Examples:

// Input: arr[] = {2, 3, -8, 7, -1, 2, 3}
// Output: 11
// Explanation: The subarray {7, -1, 2, 3} has the largest sum 11.


// Input: arr[] = {-2, -4}
// Output: –2
// Explanation: The subarray {-2} has the largest sum -2.


// Input: arr[] = {5, 4, 1, 7, 8}
// Output: 25
// Explanation: The subarray {5, 4, 1, 7, 8} has the largest sum 25.

#include<bits/stdc++.h>
using namespace std;

int maximunSubarraySum(vector<int>&arr){
    int maxi=INT_MIN;
    int curr_sum=0;

    for(int i=0;i<arr.size();i++){
        curr_sum+=arr[i];
        maxi=max(curr_sum,maxi);

        if(curr_sum<0){
            curr_sum=0;
        }

    }

    return maxi;
}

int main(){
    vector<int>arr={2, 3, -8, 7, -1, 2, 3};
    int ans=maximunSubarraySum(arr);
    cout<<ans<<endl;
    return 0;
}