#include<bits/stdc++.h>
using namespace std;

int fibonnaci(int n){
    if(n<=1){
        return n;  
    }

    int last=fibonnaci(n-1);
    int slast=fibonnaci(n-2);

    return last+slast;
}

int main(){
    int n;
    cin>>n;
    cout<<fibonnaci(n)<<endl;
    return 0;
}