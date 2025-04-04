// Rearrange Array Elements by Sign
// Last Updated : 15 Feb, 2025
// Given an array arr[] of size n, the task is to rearrange it in alternate positive and negative manner without changing the relative order of positive and negative numbers. In case of extra positive/negative numbers, they appear at the end of the array.

// Note: The rearranged array should start with a positive number and 0 (zero) should be considered as a positive number.

// Examples: 

// Input:  arr[] = [1, 2, 3, -4, -1, 4]
// Output: arr[] = [1, -4, 2, -1, 3, 4]


// Input:  arr[] = [-5, -2, 5, 2, 4, 7, 1, 8, 0, -8]
// Output: arr[] = [5, -5, 2, -2, 4, -8, 7, 1, 8, 0]

#include<bits/stdc++.h>
using namespace std;


void rearrange(vector<int>& arr) {
    vector<int> pos, neg;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    int posIdx = 0, negIdx = 0;
    int i = 0;

    while (posIdx < pos.size() && negIdx < neg.size()) {
        if (i % 2 == 0)
            arr[i++] = pos[posIdx++];
        else 
            arr[i++] = neg[negIdx++];
    }

    // Append remaining positive numbers (if any)
    while (posIdx < pos.size())
        arr[i++] = pos[posIdx++];

    // Append remaining negative numbers (if any)
    while (negIdx < neg.size())
        arr[i++] = neg[negIdx++];
}


int main(){
    vector<int>arr={1, 2, 3, -4, -1, 4};
    rearrange(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}