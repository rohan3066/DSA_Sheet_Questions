#include<bits/stdc++.h>

using namespace std;

int first_occurance(vector<int>&arr,int x){
    int n=arr.size();
    int low=0,high=n-1;
    int ans=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==x){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}


int last(vector<int>&arr,int x){
    int n=arr.size();
    int low=0,high=n-1;
    int ans=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==x){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int count(vector<int>&arr,int x){
    int firstOccur=first_occurance(arr,x);
    int lastOccur=last(arr,x);

    int result=lastOccur-firstOccur+1;

    return result;

}

int main(){

    vector<int>arr={1,2,3,3,3,3,4,4};
    int x=3;
    cout<<count(arr,x)<<endl;


    return 0;
}