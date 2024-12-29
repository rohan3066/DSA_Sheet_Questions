#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>&arr){
    int ans=INT_MAX;
    int n=arr.size();

    int low=0,high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[low]<=arr[high]){
            ans=min(ans,arr[low]);
            break;
        }

        if(arr[mid]>=arr[low]){
            ans=min(ans,arr[low]);
            low=mid+1;
        }

        else{
            ans=min(ans,arr[mid]);
            high=mid-1;
        }


    }

    return ans;
}

int main(){
    vector<int>arr={3,4,5,1,2};
    cout<<findMin(arr)<<endl;
    return 0;
}