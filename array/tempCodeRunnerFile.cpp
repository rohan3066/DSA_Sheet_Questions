#include<bits/stdc++.h>
using namespace std;

int findPeak(vector<int>&arr){
    int n=arr.size();

    if(n==1){
        return 0;
    }

    if(arr[0]>arr[1]){
        return 0;
    }


    if(arr[n-1]>arr[n-2]){
        return n-1;
    }

    int low=1,high=n-2;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }

        else if(arr[mid]>arr[mid-1]){
            low=mid+1;
        }
        else if(arr[mid]<arr[mid-1]){
            high=mid-1;
        }
    }
    return -1;

}

int main(){
    // vector<int>arr={1,3,20,4,1,0};
    // cout<<findPeak(arr)<<endl;
    // return 0;

    string s="Amar is chutya boy";
    stringstream ss(s);
    string word;
    getline(cin,word);
    cout<<word;
}