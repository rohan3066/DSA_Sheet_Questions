// Given an array, the task is to cyclically right-rotate the array by one. 

// Examples:  

// Input: arr[] = [1, 2, 3, 4, 5] 
// Output: [5, 1, 2, 3, 4]


// Input: arr[] = [2, 3, 4, 5, 1]
// Output: [1, 2, 3, 4, 5]


#include <bits/stdc++.h>
using namespace std;

void right_rotate(vector<int>& arr) {
    if (arr.size() <= 1) {
        return;
    }

    int last = arr[arr.size() - 1];

    for (int i = arr.size() - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    right_rotate(arr);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
