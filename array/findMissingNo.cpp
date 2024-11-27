#include<bits/stdc++.h>
using namespace std;

int findMissing1(vector<int>arr,int N){
    int n=arr.size();
    for(int i=1;i<=N;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
    return -1;
}
int findMissing2(vector<int>arr,int N){
    int hash[N+1]={0};
    for(int i=0;i<arr.size();i++){
        hash[arr[i]]++;
    }

    for(int i=1;i<N+1;i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;
}

#include <bits/stdc++.h>
using namespace std;

int findMissing3(vector<int> arr, int N) {
    int n = arr.size();
    int sum = (N * (N + 1)) / 2;
    int sum2 = 0;

    for (int i = 0; i < n; i++) {
        sum2 += arr[i];
    }

    return sum - sum2;
}



int main(){
    vector<int>arr={1,2,3,5,6};
    int N=6;
    cout<<findMissing1(arr,N)<<endl;
    cout<<findMissing2(arr,N)<<endl;
    cout<<findMissing3(arr,N)<<endl;

    return 0;
}