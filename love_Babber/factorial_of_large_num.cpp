// Program to Find the Factorial of a Large Number
// Last Updated : 26 Mar, 2025
// Factorial of a non-negative integer n is the product of all positive integers less than or equal to n.

// Examples:
// Input: 100
// Output: 933262154439441526816992388562667004...00000000000000 (very large number)
// Input: 50
// Output: 30414093201713378043612608166064768844377641568960512000000000000

#include <bits/stdc++.h>
using namespace std;

// Helper function to multiply a large number (stored in vector `res`) by an integer `num`
void multiply(int num, vector<int> &res) {
    int carry = 0;

    // Multiply `num` with each digit of the result stored in vector
    for (int i = 0; i < res.size(); i++) {
        int prod = res[i] * num + carry; // product + carry
        res[i] = prod % 10;              // store the last digit in the current position
        carry = prod / 10;               // update carry
    }

    // Add remaining carry to the result
    while (carry) {
        res.push_back(carry % 10); // store the last digit of carry
        carry /= 10;               // remove the last digit
    }
}

// Function to compute and print factorial of a large number
long long find_factorial(int num) {
    // Vector to store digits of result (initially contains 1)
    vector<int> res;
    res.push_back(1);

    // Multiply each number from 2 to `num` with the result
    for (int i = 2; i <= num; i++) {
        multiply(i, res);
    }

    // Print the result in reverse (since digits are stored in reverse)
    for (int j = res.size() - 1; j >= 0; j--) {
        cout << res[j];
    }

    return 0; // changed to 0 since we are not returning a factorial value, just printing it
}

int main() {
    // Call factorial function for 50 and print the result
    cout << find_factorial(50) << endl;
    return 0;
}
