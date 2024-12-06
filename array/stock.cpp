#include<bits/stdc++.h>
using namespace std;

int profit(vector<int>arr){
    int n=arr.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            maxi=max(maxi,arr[j]-arr[i]);
        }

    }
    return maxi;
}

int profit1(vector<int>arr){
    int n=arr.size();
    int maxi=INT_MIN;
    int miniPrice=INT_MAX;
    for(int i=0;i<n;i++){
        miniPrice=min(miniPrice,arr[i]);
        maxi=max(maxi,arr[i]-miniPrice);
    }
    return maxi;
}

int main(){
    vector<int>arr={7,1,5,3,6,4};
    cout<<profit(arr)<<endl;
    cout<<profit1(arr)<<endl;
    return 0;
}