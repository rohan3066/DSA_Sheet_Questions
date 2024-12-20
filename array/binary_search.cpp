#include<bits/stdc++.h>

using namespace std;

int iterative_Bs(vector<int>&arr,int target){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int low=0,high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==target){
            return mid;
        }

        else if(arr[mid]<target){
            low=mid+1;
        }

        else{
            high=mid-1;
        }
    }
    return -1;
}

int recursive(vector<int>&arr,int target,int low,int high){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int mid=(low+high)/2;

    if(arr[mid]==target){
        return mid;
    }

    else if(arr[mid]<target){
        return recursive(arr,target,low,mid-1);

    }
    else{
        return recursive(arr,target,mid+1,high);
    }

    return -1;
}

int main(){

    vector<int>arr={5,1,3,7,2};
    int target=3;
    cout<<iterative_Bs(arr,target)<<endl;
    cout<<recursive(arr,target,0,4)<<endl;
    return 0;
}
