#include<bits/stdc++.h>
using namespace std;

int getSingleElement1(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }

        }

        if(count==1){
            return arr[i];
        }
    }
    return -1;

}

int getSingleElement2(vector<int>arr){
    int n=arr.size();
    map<int,int>mapp;
    int result;
    for(int i=0;i<n;i++){
        mapp[arr[i]]++;
    }
    for(auto it=mapp.begin();it!=mapp.end();it++){
        if(it->second==1){
            result=it->first;
            return result;
        }
    }

    return -1;

}

int main(){
    vector<int>arr={3,2,1,2,1,4,3};
    cout<<getSingleElement1(arr)<<endl;
    cout<<getSingleElement2(arr)<<endl;
    return 0;
}