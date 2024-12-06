#include<bits/stdc++.h>
using namespace std;

pair<int ,int>twoSum(vector<int>arr,int target){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return make_pair(i,j);
            }
        }
    }
    return make_pair(-1,-1);
}

pair<int ,int>twoSum1(vector<int>arr,int target){
    int n=arr.size();
    unordered_map<int,int>map;
    for(int i=0;i<n;i++){
        int num=arr[i];
        int moreNeeded=target-num;
        if(map.find(moreNeeded)!=map.end()){
            return make_pair(map[moreNeeded],i);
        }
        map[num]=i;
    }
    return make_pair(-1,-1);
}



int main(){
    vector<int>arr={2,6,5,8,11};
    int target=14;
    pair<int,int>ans=twoSum(arr,target);
    pair<int,int>ans1=twoSum1(arr,target);
    cout<<ans.first<<" "<<ans.second<<endl;
    cout<<ans1.first<<" "<<ans1.second<<endl;
    return 0;
}