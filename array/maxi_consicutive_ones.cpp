#include<bits/stdc++.h>
using namespace std;

int consecutine_ones(vector<int>arr){
    int count=0;
    int maxi=0;

    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count++;
        }
        else{
            count=0;
           
        }
         maxi=max(maxi,count);
    }
    return maxi;
}

int main(){
    vector<int>arr={1,1,1,0,1,0,0,0,1};
    cout<<consecutine_ones(arr)<<endl;
    return 0;
}