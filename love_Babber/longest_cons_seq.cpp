// Longest Consecutive Subsequence
// Last Updated : 31 Dec, 2024
// Given an array of integers, the task is to find the length of the longest subsequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order. 

// Examples:  

// Input: arr[] = [2, 6, 1, 9, 4, 5, 3]
// Output: 6
// Explanation: The consecutive numbers here are from 1 to 6. These 6 numbers form the longest consecutive subsequence [2, 6, 1, 4, 5, 3].


// Input: arr[] = [1, 9, 3, 10, 4, 20, 2]
// Output: 4
// Explanation: The subsequence [1, 3, 4, 2] is the longest subsequence of consecutive elements


// Input: arr[] = [36, 41, 56, 35, 44, 33, 34, 92, 43, 32, 42]
// Output: 5
// Explanation: The subsequence [36, 35, 33, 34, 32] is the longest subsequence of consecutive elements.

#include<bits/stdc++.h>
using namespace std;

int findlength_Longest_Seq(vector<int>&arr){
    int n=arr.size();

    sort(arr.begin(),arr.end());
    int longest=INT_MIN;
    int cnt=1;

    for(int i=1;i<n;i++){
        if(arr[i]-1==arr[i-1]){
            cnt++;
        }
        else{
            longest=max(longest,cnt);
            cnt=0;
        }
    }
    return longest;
}

int main(){
    vector<int>arr={36, 41, 56, 35, 44, 33, 34, 92, 43, 32, 42};
    cout<<findlength_Longest_Seq(arr)<<endl;
    return 0;
}