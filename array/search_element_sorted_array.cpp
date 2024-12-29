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

    vector<int>arr={7,8,9,1,2,3,4,5};
    int target=9;
    int result=search(arr,target);
    if(result==-1){
        cout<<"Element not found"<<endl;
        }
        else{
            cout<<"Element found at index "<<result<<endl;
            }




    return 0;
}
