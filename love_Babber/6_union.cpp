// 1. Union with Duplicates
// We are given two arrays a[] and b[] and the task is to find the union of both the arrays. Union of two arrays is an array having all distinct elements that are present in either array. The input arrays may contain duplicates.

// Examples:


// Input : a[] = {1, 2, 3, 2, 1}, b[] = {3, 2, 2, 3, 3, 2}
// Output : {3, 2, 1}
// Explanation: Each element in the output either belongs to array a or array b, and we need to print only one occurrence of such elements.


// Input : a[] = {1, 2, 3}, b[] = {4, 5, 6}
// Output : {1, 2, 3, 4, 5, 6}
// Explanation: Each element in the output either belongs to array a or array b, and we need to print only one occurrence of such elements.


#include<bits/stdc++.h>
using namespace std;

vector<int>union_element(vector<int>arr1,vector<int>arr2){
    set<int>st;
    for(int i=0;i<arr1.size();i++){
        st.insert(arr1[i]);
    }

    for(int i=0;i<arr2.size();i++){
        st.insert(arr2[i]);
    }

    vector<int>ans;

    for(auto &it:st){
        ans.push_back(it);
    }


    return ans;

}

int main(){
    vector<int>arr1={1,2,3,5,9,6};
    vector<int>arr2={2,6,3,4,8,9};
    
    vector<int>ans=union_element(arr1,arr2);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";

    }

    cout<<endl;


    return 0;
}