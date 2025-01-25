#include<bits/stdc++.h>
using namespace std;

void sunOfN(int i,int sum){
    if(i<1){
        return;
    }

    cout<<sum<<endl;
    sunOfN(i-1,i+sum);

}

int sumOfn(int i){
    if(i==0){
        return 0 ;
    }

    return i+sumOfn(i-1);

};

int factorial(int n){
    if(n==0){
        return 1;
    }

    return n*factorial(n-1);
}

void reverseArr(int arr[],int l,int r){
    if(l>=r){
        return;
    }

    swap(arr[l],arr[r]);

    reverseArr(arr,l+1,r-1);

}

void reverseArray(vector<int>&arr,int n,int i){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i]);
    reverseArray(arr,n,i+1);
    
    
}

bool palindrome(string &s,int i){
    if(i>=s.size()/2){
        return true;
    }

    if(s[i]!=s[s.size()-i-1]){
        return false;
    }

    palindrome(s,i+1);
}













int main(){
    // int res=reverseNum(123);
    // cout<<res<<endl;

    vector<int>arr={1,2,3,4,5,6};
    // reverseArr(arr,0,5);
    reverseArray(arr,5,0);
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    string s="madammmm";
    bool res=palindrome(s,0);
    cout<<res<<endl;
    return 0;
}