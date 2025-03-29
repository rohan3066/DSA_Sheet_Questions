// Move all negative numbers to beginning and positive to end with constant extra space
// Last Updated : 11 Feb, 2025
// Given an array containing both positive and negative numbers in random order. The task is to rearrange the array elements so that all negative numbers appear before all positive numbers.

// Note:

// Given array does not contain any zeroes.
// Order of resultant array does not matter.
// Example :

// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Output: -12 -13 -5 -7 -3 -6 11 6 5

#include <bits/stdc++.h>

using namespace std;

void move(vector<int> &arr)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low < high)
    {

        while (low < high && arr[low] < 0)
        {
            low++;
        }

        while (low < high && arr[high] > 0)
        {
            high--;
        }

        if (low < high)
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
}

int main()
{

    vector<int> arr = {1, -4, 1, 4, 14, -9, 7, -22};
    move(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}