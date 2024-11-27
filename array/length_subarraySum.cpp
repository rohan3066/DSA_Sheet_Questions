#include<bits/stdc++.h>
using namespace std;

int getLengthSubarray(vector<int>arr,int k){
    int n=arr.size();
    int len=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum=0;

            for(int k=i;k<=j;k++){
                sum+=arr[k];

            }
            if(sum==k){
                len=max(len,j-i+1);
            }
        }
    }
    return len;

}

int getLengthSubarray2(vector<int>arr,int k){
    int n=arr.size();
    int len=0;

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            
            sum+=arr[j];


            if(sum==k){
                len=max(len,j-i+1);
            }
        }
    }
    return len;

}

int getLengthSubarray3(vector<int>arr,int k){
    int n=arr.size();
    map<long long,int>mapp;

    int maxlen=0;
    long long sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum==k){
            maxlen=max(maxlen,i+1);
        }

        int rem=k-sum;
        if(mapp.find(sum)!=mapp.end()){
            int len=i-mapp[rem];
            maxlen=max(maxlen,len);
        }
        if(mapp.find(sum)==mapp.end()){
            mapp[sum]=i;
        }
    }

    return maxlen;
}

int getLengthSubarray4(vector<int>arr,int k){
    int n=arr.size();
    int left=0,right=0;
    int len=0;
    int sum=arr[0];
    while(right<n){
        while(left<=right && sum>k){
            sum-=arr[left];
            left++;
        }

        if(sum==k){
            len=max(len,right-left+1);
            
        }

        right++;
        if(right<n){
            sum+=arr[right];
        }
    }

    return len;
}



int main(){
    vector<int>arr={1,2,1,3,2,4,5};
    int k=4;
    cout<<getLengthSubarray(arr,k);
    cout<<endl;
    cout<<getLengthSubarray2(arr,k);
    cout<<endl;
    cout<<getLengthSubarray3(arr,k);
    cout<<endl;
    cout<<getLengthSubarray4(arr,k);
    return 0;
}