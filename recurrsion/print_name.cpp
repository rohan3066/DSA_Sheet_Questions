#include<bits/stdc++.h>
using namespace std;

int cnt=0;
string name;
void print(){
    if(cnt==0){
        return;
    }

    cout<<name<<endl;
    cnt--;
    print();

}

void printNum(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    printNum(i+1,n);
}

void printNumRev(int i,int n){
    if(i<n){
        return;
    }
    cout<<i<<endl;
    printNumRev(i-1,n);
}

void printNumBackTrack(int i,int n){
    if(i<1){
        return;
    }
    printNumBackTrack(i-1,n);
    cout<<i<<endl;

}

void printRevBacktrack(int i,int n){
    if(i>n){
        return;
    }

    printRevBacktrack(i+1,n);
    cout<<i<<endl;
}







int main(){
    // cin>>cnt;
    // getline(cin,name);
    // print();
    // cout<<endl;
    printNum(1,10);
    cout<<endl;
    printNumRev(10,1);
    cout<<endl;
    printNumBackTrack(10,10);
    cout<<endl;
    printRevBacktrack(1,10);
    return 0;
}