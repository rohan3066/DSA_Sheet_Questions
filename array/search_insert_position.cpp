#include<bits/stdc++.h>
using namespace std;

int serach_insert_pos(vector<int>&arr,int x){
    int n=arr.size();
    int low=0,high=n-1;
    int ans=n;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }

        else{
            low=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int>arr={1,3,5,6};
    int x=7;
    cout<<serach_insert_pos(arr,x)<<endl;
    return 0;
}