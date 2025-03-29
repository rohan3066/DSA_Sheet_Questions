#include<bits/stdc++.h>
using namespace std;

int countPainters(vector<int>arr,int k,int time){
    int painter=1;
    long long boards=0;

    int n=arr.size();

    for(int i=0;i<n;i++){
        if(boards+arr[i]<=time){
            boards+=arr[i];
        }

        else{
            painter++;
            boards=arr[i];
        }
    }

    return painter;
}

int findTime(vector<int>&arr,int k){
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);

    while(low<=high){
        int mid=(low+high)/2;
        int ans=countPainters(arr,k,mid);

        if(ans>k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }


    }

    return low;
}


int main(){
    vector<int> boards = {10, 20, 30, 40};
    int k = 2;
    int ans=findTime(boards,k);
    cout<<ans<<endl;


    cout<<"Hello Rohan..........";
    return 0;
}