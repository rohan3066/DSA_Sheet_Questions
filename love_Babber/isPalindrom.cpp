// Check if all elements of the array are palindrome or not
// Last Updated : 30 Dec, 2024
// Given an array arr[]. The task is to check if the array is PalinArray or not i.e., if all elements of array are palindrome or not. 

// Examples: 

// Input: arr[] = [21, 131, 20] 
// Output: false
// Explanation: For the given array, element 20 is not a palindrome so false is the output.


// Input: arr[] = [111, 121, 222, 333, 444] 
// Output: true 
// Explanation: For the given array, all the elements of the array are palindromes. 

#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(int a){
    string s=to_string(a);
    string st=s;
    int l=0;
    int e=st.size()-1;

    while(l<e){
        swap(st[l],st[e]);
        l++;
        e--;
    }

    if(s==st){
        return true;
    }

    return false;



}

bool isArrayElementPalindrome(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        if(!isPalindrom(arr[i])){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int>arr={21, 131, 20};
    cout<<isArrayElementPalindrome(arr)<<endl;

    return 0;
}