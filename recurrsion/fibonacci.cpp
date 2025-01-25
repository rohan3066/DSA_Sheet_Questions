#include<bits/stdc++.h>
using namespace std;
int sumOfFibonacci(int n){
    if(n<=1){
        return n;
    }

    return sumOfFibonacci(n-1)+sumOfFibonacci(n-2);
}

int main(){
    int res=sumOfFibonacci(10);
    cout<<res<<endl;
    return 0;
}