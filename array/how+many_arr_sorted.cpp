#include<bits/stdc++.h>

using namespace std;

int sorted_array(vector<int>&arr){
    int n=arr.size();

    int low=0,high=n-1;

    int ans=INT_MAX;
    int index=-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(arr[low]<arr[high]){
            if(arr[low]<ans){
                ans=arr[low];
                index=low;

            }
        }

        if(arr[mid]>=arr[low]){
            low=mid+1;

            if(arr[low]<ans){
                ans=arr[low];
                index=low;
            }
        }

        else{
            high=mid-1;

            if(arr[mid]<ans){
                ans=arr[mid];
                index=mid;

            }
        }
    }

    return index;

}

int main(){
    vector<int>arr={7,6,5, 1, 3, 4, 2};
    cout<<sorted_array(arr)<<endl;
    return 0;
}