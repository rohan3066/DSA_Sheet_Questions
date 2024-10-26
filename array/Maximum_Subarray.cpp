#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int  Maximum_Subarray(vector<int> &arr){
    int maxi=INT_MIN;
    int sum=0;

    for(int i=0;i<arr.size();i++){
        sum+=arr[i];

        if(sum>maxi){
            maxi=sum;
        }

        if(sum<0){
            sum=0;
        }


    }

    return maxi;
}


int main(){
    vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
    cout<<Maximum_Subarray(arr)<<endl;
    return 0;
}