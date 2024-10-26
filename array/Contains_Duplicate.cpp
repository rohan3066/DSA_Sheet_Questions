#include <bits/stdc++.h>
using namespace std;

// Brute force approach
bool containsDuplicate(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }

    return false;
}

// optimal approach

bool isDuplicate(vector<int> &arr)
{
    unordered_map<int, int> map;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }

    for (auto &it : map)
    {
        if (it.second > 1)
        {
            return true;
        }
    }

    return false;
}

int main()
{

    vector<int> arr = {1, 5, 2, 1, 7};
    cout << isDuplicate(arr) << endl;
    cout << containsDuplicate(arr) << endl;

    return 0;
}