#include<bits/stdc++.h>
using namespace std;
bool palindromCheck(int i,string &s){
    int n=s.size();

    if(i>=n/2){
        return true;
    }

    if(s[i]!=s[n-i-1]){
        return false;
    }
    return palindromCheck(i+1,s);
}


int main(){

    string s="madam";
    cout<<palindromCheck(0,s)<<endl;

    return 0;
}