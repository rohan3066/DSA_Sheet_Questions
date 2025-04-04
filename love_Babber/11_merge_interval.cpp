// Merge Overlapping Intervals
// Last Updated : 26 Mar, 2025
// Given an array of time intervals where arr[i] = [starti, endi], the task is to merge all the overlapping intervals into one and output the result which should have only mutually exclusive intervals.

// Examples:

// Input: arr[] = [[1, 3], [2, 4], [6, 8], [9, 10]]
// Output: [[1, 4], [6, 8], [9, 10]]
// Explanation: In the given intervals, we have only two overlapping intervals [1, 3] and [2, 4]. Therefore, we will merge these two and return [[1, 4]], [6, 8], [9, 10]].


// Input: arr[] = [[7, 8], [1, 5], [2, 4], [4, 6]]
// Output: [[1, 6], [7, 8]]
// Explanation: We will merge the overlapping intervals [[1, 5], [2, 4], [4, 6]] into a single interval [1, 6].


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>merge_interval(vector<vector<int>>&interval){
    if(interval.empty()){
        return {};
    }
    sort(interval.begin(),interval.end());
    vector<vector<int>>merged;
    merged.push_back(interval[0]);


    for(int i=1;i<interval.size();i++){
        vector<int>&last=merged.back();

        if(interval[i][0]<=last[1]){
            last[1]=max(interval[i][1],last[1]);

        }

        else{
            merged.push_back(interval[i]);
        }
    }

    return merged;
}

int main(){
    vector<vector<int>>interval={{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    vector<vector<int>>ans=merge_interval(interval);
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<2;j++){
            cout<<ans[i][j]<<",";
        }
        cout<<"]";
    }
    return 0;
}