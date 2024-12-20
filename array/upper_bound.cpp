#include<bits/stdc++.h>

using namespace std;

int upper_bound(vector<int>&arr,int target){
    int n=arr.size();

    for(int i=0;i<n;i++){
        if(arr[i]>target){
            return i;
        }
    }

    return -1;
    
}

int upper_bound_optimal(vector<int>&arr,int target){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=n;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]>target){
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
    int target=30;
    int ans=upper_bound(arr,target);
    int ans1=upper_bound_optimal(arr,target);
    cout<<ans<<endl;
    cout<<ans1<<endl;

    return 0;
}