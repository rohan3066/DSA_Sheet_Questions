#include<iostream>
#include<vector>
using namespace std;

pair<int,int> Maxi_Min(vector<int> arr){
    int maxi=INT16_MIN;
    int mini=INT16_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>maxi){
            maxi=arr[i];

        }

        if(arr[i]<mini){
            mini=arr[i];
        }
    }


    return {mini,maxi};


}

int main(){

    vector<int>arr={4,8,3,7,1,2};
    pair<int,int>ans=Maxi_Min(arr);
    cout<<ans.first<<endl;
    cout<<ans.second<<endl;

    return 0;
}
