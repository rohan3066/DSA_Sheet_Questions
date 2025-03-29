// You are given a string s, and your task is to reverse the string.

// Examples:

// Input: s = "Geeks"
// Output: "skeeG"
// Input: s = "for"
// Output: "rof"
// Input: s = "a"
// Output: "a"


#include<bits/stdc++.h>

using namespace std;

void reverseString(string &s){
    int n=s.size();
    int low = 0;
    int high = n-1;

    while(low<high){
        swap(s[low],s[high]);
        low++;
        high--;
    }


}

int main(){
    string s="rohan";
    reverseString(s);
    cout<<s<<endl;

    return 0;
}