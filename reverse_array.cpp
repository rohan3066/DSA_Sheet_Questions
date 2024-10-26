#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;


vector<int> reverse_array(vector<int> &arr){
    int start=0;
    int end=arr.size()-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    return arr;
}
int main(){

    vector<int>arr={1,4,7,3,8};
    vector<int> reversed_arr=reverse_array(arr);
    cout<<"reversed array: "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;

    return 0;
}