#include<bits/stdc++.h>
using namespace std;

vector<int> rearange(vector<int>&arr){
    int n=arr.size();
    vector<int>pos(0);
    vector<int>neg(0);

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }

    for(int i=0;i<pos.size();i++){
        arr[i*2]=pos[i];
        arr[i*2+1]=neg[i];
        
    }

    return arr;
}

vector<int> rearange1(vector<int>&arr){
    int n=arr.size();
        int posIndex=0;
        int negIndex=1;
    for(int i=0;i<n;i++){

        if(arr[i]>=0){
            arr[posIndex]=arr[i];
            posIndex+=2;

        }
        else{
            arr[negIndex]=arr[i];
            negIndex+=2;
        }
    }
    return arr;
}
int main(){

    vector<int>arr={1,2,3,-4,-3,-2};
    arr=rearange1(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}