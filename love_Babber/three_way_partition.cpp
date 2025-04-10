// Three way partitioning of an array around a given range
// Last Updated : 20 Feb, 2023
// Given an array and a range [lowVal, highVal], partition the array around the range such that array is divided in three parts. 

// All elements smaller than lowVal come first. 
// All elements in range lowVal to highVal come next. 
// All elements greater than highVal appear in the end. 
// The individual elements of the three sets can appear in any order.



// Examples;


// Input: arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32}  , lowVal = 14 , highVal = 20
// Output: arr[] = {1, 5, 4, 2, 1, 3, 14, 20, 20, 98, 87, 32, 54}
// Explanation: all elements which are less than 14 are present in the range of 0 to 6
//                        all elements which are greater than 14 and less than 20 are present in the range of 7 to 8
//                        all elements which are greater than 20 are present in the range of 9 to 12        


// Input: arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32} , lowVal = 20 , highVal = 20     
// Output: arr[] = {1, 14, 5, 4, 2, 1, 3, 20, 20, 98, 87, 32, 54} 



#include<bits/stdc++.h>
using namespace std;

void threeWayPartition(vector<int>&arr,int lowVal,int highVal){
    int n=arr.size();
    int start=0,end=n-1;
    int i=0;

    while(i<=end){

        if(arr[i]<lowVal){
            swap(arr[i],arr[start]);
            start++;
            i++;
        }

        else if(arr[i]>highVal){
            swap(arr[i],arr[end]);
            end--;
        }

        else{
            i++;
        }
    }

}

int main(){

    vector<int>arr={1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    threeWayPartition(arr,14,20);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}