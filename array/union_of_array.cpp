#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> arr1, vector<int> arr2, int n, int m) {
    vector<int> ans;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            if (ans.size() == 0 || ans.back() != arr1[i]) {
                ans.push_back(arr1[i]);
            }
            i++;
        } else {
            if (ans.size() == 0 || ans.back() != arr2[j]) {
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n) {
        if (ans.size() == 0 || ans.back() != arr1[i]) {
            ans.push_back(arr1[i]);
        }
        i++;
    }
    while (j < m) {
        if (ans.size() == 0 || ans.back() != arr2[j]) {
            ans.push_back(arr2[j]);
        }
        j++;
    }
    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {4, 5, 6, 7, 8, 9};
    int n = arr1.size();
    int m = arr2.size();
    vector<int> ans = findUnion(arr1, arr2, n, m);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
