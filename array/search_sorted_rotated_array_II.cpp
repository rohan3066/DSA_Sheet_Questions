#include<bits/stdc++.h>
using namespace std;

int search(vector<int>&arr,int target){
    int n=arr.size();
    int low=0,high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==target){
            return mid;
        }

        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low++;
            high--;
            continue;
        }

        if(arr[mid]>=arr[low]){
            if(arr[low]<=target && arr[mid]>=target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        else{
            if(arr[mid]<=target && arr[high]>=target){
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

    vector<int>arr={7,8,9,1,2,2,2,3,4,4,5,5,5};
    int target=9;
    cout<<search(arr,target)<<endl;
    
    return 0;
}