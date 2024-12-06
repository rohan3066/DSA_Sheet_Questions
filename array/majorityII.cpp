
#include<bits/stdc++.h>
using namespace std;

vector<int> findMajority1(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        int cnt = count(arr.begin() + i, arr.end(), arr[i]);
        if (cnt > n / 3) {
            res.push_back(arr[i]);
        }
    }
    if (res.size() == 2 && res[0] > res[1]) {
        swap(res[0], res[1]);
    }
    return res;
}

vector<int> findMajority2(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    map<int, int> mapp;
    for (int i = 0; i < n; i++) {
        mapp[arr[i]]++;
    }
    for (auto it : mapp) {
        if (it.second > n / 3) {
            res.push_back(it.first);
        }
    }
    if (res.size() == 2 && res[0] > res[1]) {
        swap(res[0], res[1]);
    }
    return res;
}

#include <vector>
using namespace std;

vector<int> findMajority3(vector<int>& arr) {
    int ele1 = -1, ele2 = -1, cnt1 = 0, cnt2 = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (cnt1 == 0 && (cnt2 == 0 || arr[i] != ele2)) {
            ele1 = arr[i];
            cnt1++;
        } else if (cnt2 == 0 && arr[i] != ele1) {
            ele2 = arr[i];
            cnt2++;
        } else if (arr[i] == ele1) {
            cnt1++;
        } else if (arr[i] == ele2) {
            cnt2++;
        } else {
            cnt1--;
            cnt2--;
        }
    }
    vector<int> ans;
    cnt1 = 0;
    cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == ele1) {
            cnt1++;
        }
        if (arr[i] == ele2) {
            cnt2++;
        }
    }
    if (cnt1 > n / 3) ans.push_back(ele1);
    if (cnt2 > n / 3 && ele1 != ele2) ans.push_back(ele2);
    return ans;
}


int main() {
    vector<int> arr = {2, 2, 3, 1, 3, 2, 1, 1};
    vector<int> res1 = findMajority3(arr);
    for (auto ele : res1) {
        cout << ele << " ";
    }
    return 0;
}