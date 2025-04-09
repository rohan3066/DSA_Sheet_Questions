// Check if an array is subset of another array
// Last Updated : 31 Dec, 2024
// Given two arrays a[] and b[] of size m and n respectively, the task is to determine whether b[] is a subset of a[]. Both arrays are not sorted, and elements are distinct.

// Examples: 

// Input: a[] = [11, 1, 13, 21, 3, 7], b[] = [11, 3, 7, 1] 
// Output: true


// Input: a[]= [1, 2, 3, 4, 5, 6], b = [1, 2, 4] 
// Output: true


// Input: a[] = [10, 5, 2, 23, 19], b = [19, 5, 3] 
// Output: false

#include<bits/stdc++.h>
using namespace std;

bool isSubset(vector<int>&a,vector<int>&b){
    int n=a.size();
    int m=b.size();

    unordered_set<int>st;

    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }

    for(int i=0;i<m;i++){
        if(st.find(b[i])==st.end()){
            return false;
        }
    }

    return true;
}

int main(){
    vector<int>a={10, 5, 2, 23, 19};
    vector<int>b={19, 5, 3};
    cout<<isSubset(a,b);
    return 0;
}
