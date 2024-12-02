#include<bits/stdc++.h>
using namespace std;

void sort_o_1_2(vector<int>&arr){
    int n=arr.size();
    int low=0,mid=0;
    int high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    vector<int>arr={1,0,2,1,0,1,2};
    sort_o_1_2(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";

    }

    cout<<endl;
    return 0;
}