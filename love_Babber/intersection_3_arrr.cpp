// Find common elements in three sorted arrays
// Last Updated : 20 Mar, 2025
// Given three sorted arrays in non-decreasing order, print all common elements in non-decreasing order across these arrays. If there are no such elements return an empty array. In this case, the output will be -1.

// Note: In case of duplicate common elements, print only once.

// Examples: 

// Input: arr1[] = [1, 5, 10, 20, 30], arr2[] = [5, 13, 15, 20], arr3[] = [5, 20] 
// Output: 5 20
// Explanation: 5 and 20 are common in all the arrays.


// Input: arr1[] = [2, 5, 10, 30], arr2[] = [5, 20, 34], arr3[] = [5, 13, 19]
// Output: 5
// Explanation: 5 is common in all the arrays.

#include<bits/stdc++.h>
using namespace std;

vector<int>intersection(vector<int>&arr1,vector<int>&arr2,vector<int>&arr3){
    int first=0;
    int second=0;
    int third=0;
    int n1=arr1.size();
    int n2=arr2.size();
    int n3=arr3.size();

    vector<int>ans;

    while(first<n1 && second<n2 && third<n3){
        if(arr1[first] == arr2[second] && arr2[second] == arr3[third]){
            ans.push_back(arr1[first]);
            first++;
            second++;
            third++;
        }

        else if(arr1[first]<arr2[second] || arr1[first]<arr3[third]){
            first++;
        }

        else if(arr2[second]<arr1[first] || arr2[second]<arr3[third]){
            second++;
        }
        else{
            third++;
        }
    }

    return ans;
}

int main(){
    vector<int>arr1={2, 5, 10, 30};
    vector<int>arr2={5, 20, 34};
    vector<int>arr3={5, 13, 19};
    vector<int>res=intersection(arr1,arr2,arr3);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}