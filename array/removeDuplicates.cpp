#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int>arr){
    int n = arr.size();
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

int main(){
    vector<int>arr = {1,2,2,3,3,4,4,4};
    int n = removeDuplicate(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}