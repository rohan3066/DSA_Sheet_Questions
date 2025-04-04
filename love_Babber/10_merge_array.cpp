// Merge two sorted arrays
// Last Updated : 28 Feb, 2025
// Given two sorted arrays, the task is to merge them in a sorted manner.
// Examples: 

// Input: arr1[] = { 1, 3, 4, 5}, arr2[] = {2, 4, 6, 8} 
// Output: arr3[] = {1, 2, 3, 4, 4, 5, 6, 8}


// Input: arr1[] = { 5, 8, 9}, arr2[] = {4, 7, 8} 
// Output: arr3[] = {4, 5, 7, 8, 8, 9} 


#include<bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>& arr1, vector<int>& arr2) {
    int first = 0;
    int second = 0;
    int n = arr1.size();
    int m = arr2.size();
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    vector<int> ans;

    while (first < n && second < m) {
        if (arr1[first] <= arr2[second]) {
            ans.push_back(arr1[first++]);
        } else {
            ans.push_back(arr2[second++]);
        }
    }

    while (first < n) {
        ans.push_back(arr1[first++]);
    }

    while (second < m) {
        ans.push_back(arr2[second++]);
    }

    return ans;
}


int main(){

    vector<int>arr1={4,3,2,8,1};
    vector<int>arr2={10,15,7};
    vector<int>ans=merge(arr1,arr2);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;

    return 0;
}