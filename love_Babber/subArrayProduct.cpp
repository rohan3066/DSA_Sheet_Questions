// Maximum Product Subarray | Set 3
// Last Updated : 26 Aug, 2022
// Given an array A[] that contains both positive and negative integers, find the maximum product subarray.

// Examples : 

// Input: A[] = { 6, -3, -10, 0, 2 }
// Output: 180  // The subarray is {6, -3, -10}

// Input: A[] = {-1, -3, -10, 0, 60 }
// Output: 60  // The subarray is {60}

// Input: A[] = { -2, -3, 0, -2, -40 }
// Output: 80  // The subarray is {-2, -40}
// The idea is to traverse array from left to right keeping two variables minVal and maxVal which represents the minimum and maximum product value till the ith index of the array. Now, if the ith element of the array is negative that means now the values of minVal and maxVal will be swapped as value of maxVal will become minimum by multiplying it with a negative number. Now, compare the minVal and maxVal. 
// The value of minVal and maxVal depends on the current index element or the product of the current index element and the previous minVal and maxVal respectively.

#include<bits/stdc++.h>
using namespace std;

int maxSubarrayProduct(vector<int>arr){
    int n= arr.size();
    
    int maxi=arr[0];
    int mini=arr[0];
    int maxPro=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]<0){
            swap(maxi,mini);
        }

        maxi=max(arr[i],arr[i]*maxi);
        mini=min(arr[i],arr[i]*mini);

        maxPro=max(maxPro,maxi);

    }

    return maxPro;
}

int main(){
    vector<int>arr={6, -3, -10, 0, 2 };
    cout<<maxSubarrayProduct(arr)<<endl;
    return 0;
}