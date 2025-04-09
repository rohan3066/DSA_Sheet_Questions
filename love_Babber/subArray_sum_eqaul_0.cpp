// ubarray with 0 sum
// Last Updated : 20 Jul, 2024
// Given an array of positive and negative numbers, the task is to find if there is a subarray (of size at least one) with 0 sum.

// Examples: 

// Input: {4, 2, -3, 1, 6}
// Output: true 
// Explanation:
// There is a subarray with zero sum from index 1 to 3.


// Input: {4, 2, 0, 1, 6}
// Output: true
// Explanation: The third element is zero. A single element is also a sub-array.


// Input: {-3, 2, 3, 1, 6}
// Output: false

#include<bits/stdc++.h>
using namespace std;

bool isSumEqual_zero(vector<int>arr){
    int n=arr.size();
    unordered_set<int>mp;
    int sum=0;

    for(int i=0;i<n;i++){
        sum +=arr[i];

        if(sum==0 || mp.find(sum)!=mp.end()){
            return true;
        }

        mp.insert(sum);


    }

    return false;
}

int main(){

    vector<int>arr={4, 2, -3, 1, 6};
    cout<<isSumEqual_zero(arr)<<endl;
    return 0;
}