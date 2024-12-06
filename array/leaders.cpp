#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>arr){
    int n=arr.size();
    vector<int>leaders;
    int max=arr[n-1];
    leaders.push_back(max);

    for(int i=n-2;i>=0;i--){
        if(arr[i]>max){
            max=arr[i];
            leaders.push_back(max);
        }
    }
    return leaders;
}

int main(){
    vector<int>arr={16,17,4,3,5,2};
    vector<int>ans=leaders(arr);
    for(int i:ans){
        cout<<i<<" ";

    }
    return 0;
}