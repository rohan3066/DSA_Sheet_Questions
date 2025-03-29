// Given an array of size N. The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.

// Examples:

// Input: arr[] = {3, 5, 4, 1, 9}
// Output: Minimum element is: 1
//               Maximum element is: 9


// Input: arr[] = {22, 14, 8, 17, 35, 3}
// Output:  Minimum element is: 3
//               Maximum element is: 35



#include<bits/stdc++.h>

using namespace std;

pair<int,int>min_max(vector<int>arr){
    int mini=INT_MAX;
    int maxi=INT_MIN;

    for(int i=0;i<arr.size();i++){
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }

    return {mini,maxi};
}


int main(){
    vector<int>arr={1,8,3,7,2,4,11};
    cout<<"Minimum :"<<min_max(arr).first<<" "<<"Maximunm : "<<min_max(arr).second<<endl;
    return 0;
}