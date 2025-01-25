#include<bits/stdc++.h>
using namespace std;

void printSubSeq(int ind,vector<int>&ds,vector<int>&arr,int n){
    if(ind==n){
        for(auto &it:ds){
            cout<<it<<" ";

        }
        if(ds.size()==0){
            cout<<"{}"<<endl;
        }
        cout<<endl;
        return ;
    }

    ds.push_back(arr[ind]);
    printSubSeq(ind+1,ds,arr,n);
    ds.pop_back();
    printSubSeq(ind+1,ds,arr,n);
    
}

int main(){
    vector<int>arr={3,2,1};
    int n=arr.size();
    vector<int>ds;
    printSubSeq(0,ds,arr,n);
    return 0;
}