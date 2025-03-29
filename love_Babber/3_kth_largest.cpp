// K’th Smallest/Largest Element in Unsorted Array | Expected Linear Time
// Last Updated : 24 Mar, 2025
// Given an array of distinct integers and an integer k, where k is smaller than the array’s size, the task is to find the k’th smallest element in the array.

// Examples:

// Input: arr = [7, 10, 4, 3, 20, 15], k = 3
// Output: 7
// Explanation: The sorted array is [3, 4, 7, 10, 15, 20], so the 3rd smallest element is 7.


// Input: arr = [7, 10, 4, 3, 20, 15], k = 4
// Output: 10
// Explanation: The sorted array is [3, 4, 7, 10, 15, 20], so the 4th smallest element is 10.

#include<bits/stdc++.h>

using namespace std;

pair<int,int>kth_smallest_largest(vector<int>arr,int k){
    if(arr.empty() || k>arr.size()){
        return {-1,-1};
    }
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int kth_small=k;
    int kth_large=n-k;

    return {arr[kth_small-1],arr[kth_large-1]};
}

int main(){

    vector<int>arr={1,7,11,2,5,9,3};
    int k=2;
    cout<<"kth smallest element :"<<kth_smallest_largest(arr,k).first<<" "<<"kth largest element : "<<kth_smallest_largest(arr,k).second<<endl;


    return 0;
}

