#include<bits/stdc++.h>
using namespace std;

int majority_ele1(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }

        if(cnt>n/2){
            return arr[i];
        }
    }

    return -1;


}
int majority_ele2(vector<int>arr){
    int n=arr.size();
    map<int,int>mapp;
    for(int i=0;i<n;i++){
        mapp[arr[i]]++;
    }
    for(auto it:mapp){
        if(it.second>n/2){
            return it.first;
        }
    }

    return -1;


}
int majority_ele3(vector<int>arr){
    int n=arr.size();
    int cnt=0;
    int ele;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            ele=arr[i];
        }

        else if(arr[i]==ele){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            cnt1++;
        }
    }

    if(cnt1>n/2){
        return ele;
    }

    return -1;
}

int main(){
    vector<int>arr={1,2,1,5,2,1,4,1,2,1,1};
    cout<<majority_ele1(arr)<<endl;
    cout<<majority_ele2(arr)<<endl;
    cout<<majority_ele3(arr)<<endl;
    return 0;
}