// Stock Buy and Sell – Max 2 Transactions Allowed
// Last Updated : 19 Mar, 2025
// In the stock market, a person buys a stock and sells it on some future date. Given the stock prices of n days in an array prices[ ]. Find out the maximum profit a person can make in at most 2 transactions. A transaction is equivalent to (buying + selling) of a stock and a new transaction can start only when the previous transaction has been completed.

// Examples: 

// Input:   prices[] = [10, 22, 5, 75, 65, 80]
// Output:  87
// Explanation: Buy at 10, sell at 22, profit = 22 – 10 = 12
//                        Buy at 5 and sell at 80, total profit = 12 + (80 – 5) = 87


// Input:   prices[] = [100, 30, 15, 10, 8, 25, 80]
// Output:  72
// Explanation: Only one transaction needed here. Buy at price 8 and sell at 80.


// Input:   prices[] = [90, 80, 70, 60, 50]
// Output:  0
// Explanation: Not possible to earn.


#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>&arr){
    int n=arr.size();
    int pivot=0;

    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            pivot=i;
            break;
        }
    }
    

}

int main(){
    return 0;
}