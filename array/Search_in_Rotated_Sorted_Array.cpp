#include <bits/stdc++.h>
using namespace std;

int searchInRoatedArray(vector<int> &arr,int k){
    int n=arr.size();
    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            return mid;
        }

        if(arr[low]<=arr[mid]){
            if(arr[low]<=k && arr[mid]>=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        else{
            if(arr[mid]<=k && arr[high]>=k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }

    return -1;
}


int main(){

    vector<int>arr={4,5,6,7,1,2,3};
    int k=5;
    cout<<searchInRoatedArray(arr,k)<<endl;
    return 0;
}