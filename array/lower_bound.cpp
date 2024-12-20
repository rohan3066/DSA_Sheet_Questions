#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int>&arr,int target){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>=target){
            return i;
        }
    }

    return -1;
}

int lower_bound_optimal(vector<int>&arr,int target){
    int low=0,high=arr.size()-1;
    int ans=arr.size();

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]>=target){
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
    vector<int>arr={10,20,30,40,50};
    int target=35;
    int ans=lower_bound_optimal(arr,target);
    cout<<ans<<endl;

    return 0;
}