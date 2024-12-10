#include<bits/stdc++.h>
using namespace std;
bool linear_search(vector<int>arr,int ele){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==ele){
            return true;
        }
    }
    return false;
}

int longest_sequence(vector<int>arr){
    int n=arr.size();
    int lenght=1;

    for(int i=0;i<n;i++){
        int count=1;
        int x=arr[i];

        while(linear_search(arr,x+1)==true){
            x=x+1;
            count++;
        }
        lenght=max(lenght,count);
    }
    return lenght;
}

int longest_sequence1(vector<int>&arr){
    int n=arr.size();


    sort(arr.begin(),arr.end());
    int cnt=0;
    int length=1;
    int lastLargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]-1==lastLargest){           
            cnt++;
            lastLargest=arr[i];
        }
        else if(arr[i]!=lastLargest){
            cnt=1;
            lastLargest=arr[i];
        }
        length=max(length,cnt);  
    }
    return length;
}

int longest_sequence2(vector<int>&arr){
    int n=arr.size();
    int length=1;
    unordered_set<int>set;
    


    for(int i=0;i<n;i++){
        set.insert(arr[i]);
    }

    for(auto it:set){
        if(set.find(it-1)==set.end()){
            int cnt=1;
            int x=it;

           while(set.find(x+1)!=set.end()){
                x=x+1;
                cnt++;
           }
           length=max(length,cnt);

        }
    }
    return length;
}



int main(){
    vector<int>arr={100,200,1,6,4,2,3,5};
    int result=longest_sequence2(arr);
    cout<<result<<endl;

    return 0;
}