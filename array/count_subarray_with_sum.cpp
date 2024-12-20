#include<bits/stdc++.h>
#include<map>
#include<set>


using namespace std;

int subSet_1(vector<int>arr,int k){
    int n=arr.size();
    int cnt=0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;

            for(int K=i;K<=j;K++){
                sum=sum+arr[K];
            }
            
            if(sum==k){
                cnt+=1;
            }
        }
    }
    return cnt;
}

int subSet_2(vector<int>arr,int k){
    int n=arr.size();
    int cnt=0;

    for(int i=0;i<n;i++){
        int sum=0;

        for(int j=i;j<n;j++){
            sum+=arr[j];

            if(sum==k){
                cnt+=1;
            }
        }
    }

    return cnt;

}

int subSet_3(std::vector<int> arr, int k) {
    int n = arr.size(); // size of the given array.
    std::map<int, int> mpp; // Correctly define the map with <int, int> type
    int preSum = 0, cnt = 0;

    mpp[0] = 1; // Setting 0 in the map.
    for (int i = 0; i < n; i++) {
        // add current element to prefix Sum:
        preSum += arr[i];

        // Calculate x-k:
        int remove = preSum - k;

        // Add the number of subarrays to be removed:
        cnt += mpp[remove];

        // Update the count of prefix sum
        // in the map.
        mpp[preSum] += 1;
    }
    return cnt;
}



int main(){
    vector<int>arr={3,1,2,4};
    int ans=subSet_3(arr,6);
    cout<<ans<<endl;
    return 0;
}