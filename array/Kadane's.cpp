#include<bits/stdc++.h>
using namespace std;

int maxiSum(vector<int>arr){
    int maxi=INT_MIN;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;

            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }

            maxi=max(sum,maxi);

        }
    }
    return maxi;
}
int maxiSum2(vector<int>arr){
    int n=arr.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
             sum+=arr[j];

            maxi=max(sum,maxi);
        }
    }
    return maxi;
}

int kadane(vector<int>arr){
    int n=arr.size();
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxi=max(maxi,sum);
        if(sum<0)sum=0;

    }
    return maxi;
}

int main(){
    vector<int>arr={1,1,-2,3,4,-2,4,5};
    cout<<maxiSum(arr)<<endl;
    cout<<maxiSum2(arr)<<endl;
    cout<<kadane(arr)<<endl;

    return 0;
}