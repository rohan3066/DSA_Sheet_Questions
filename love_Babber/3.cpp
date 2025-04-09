// Given Array of size n and a number k, find all elements that appear more than n/k times
// Last Updated : 05 Apr, 2025
// Given an array of size n and an integer k, find all elements in the array that appear more than n/k times. 

// Examples:

// Input: arr[ ] = [3, 4, 2, 2, 1, 2, 3, 3], k = 4
// Output: [2, 3]
// Explanation: Here n/k is 8/4 = 2, therefore 2 appears 3 times in the array that is greater than 2 and 3 appears 3 times in the array that is greater than 2


// Input: arr[ ] = [9, 10, 7, 9, 2, 9, 10], k = 3
// Output: [9]
// Explanation: Here n/k is 7/3 = 2, therefore 9 appea

#include<bits/stdc++.h>
using namespace std;

vector<int> find(vector<int>&arr){
    map<int,int>mp;
    int n=arr.size();

    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }

    vector<int>ans;
    for(auto & it:mp){
        if(it.second>=n/3){
            ans.push_back(it.first);
        }
    }
    return ans;
}

int main(){

    vector<int>arr={3, 4, 2, 2, 1, 2, 3, 3};
    vector<int>ans=find(arr);
    cout<<"[ ";
    for(auto &it:ans){
        cout<<it<<"  ";

    }
    cout<<"]";

    return 0;
}

