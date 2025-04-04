
// 2 Sum – Count pairs with given sum
// Last Updated : 21 Oct, 2024
// Given an array arr[] of n integers and a target value, the task is to find the number of pairs of integers in the array whose sum is equal to target.

// Examples:  

// Input: arr[] = {1, 5, 7, -1, 5}, target = 6
// Output:  3
// Explanation: Pairs with sum 6 are (1, 5), (7, -1) & (1, 5).         


// Input: arr[] = {1, 1, 1, 1}, target = 2
// Output:  6
// Explanation: Pairs with sum 2 are (1, 1), (1, 1), (1, 1), (1, 1), (1, 1) and (1, 1).


// Input: arr[] = {10, 12, 10, 15, -1}, target = 125
// Output:  0

#include<bits/stdc++.h>
using namespace std;

int countPairs(int arr[], int n, int target) {
    unordered_map<int, int> freq;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];
        
        // Check if complement exists in map
        if (freq.find(complement) != freq.end()) {
            count += freq[complement];
        }
        
        // Add current element to the map
        freq[arr[i]]++;
    }
    
    return count;
}

int main(){
    int arr[]={1, 5, 7, -1, 5};
    int target=6;
    cout<<countPairs(arr,5,target);

    return 0;
}