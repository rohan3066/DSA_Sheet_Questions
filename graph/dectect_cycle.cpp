// Detect Cycle in an Undirected Graph (using BFS)


// 153

// 5
// Problem Statement: Given an undirected graph with V vertices and E edges, check whether it contains any cycle or not. 

// Examples:

// Example 1:
// Input:
// V = 8, E = 7



// Output:  0

// Explanation: No cycle in the given graph.

#include<bits/stdc++.h>
using namespace std;

bool detect(int src,vector<int>adj[],int vis[]){
    vis[src]=1;
    queue<pair<int,int>>q;
    q.push({src,-1});

    while(!q.empty()){
        int node=q.front().first;
        int par=q.front().second;
        q.pop();

        for(auto &it:adj[node]){
            if(!vis[it]){
                vis[node]=1;
                q.push({it,node});
            }

            else if(par!=it){
                return true;
            }

        }
    }

    return false;

}

bool cycle(int V,vector<int>adj[]){
    int vis[V]={0};
    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(detect(i,adj,vis)) return true;
        }

    }

    return false;

}

int main()
{
    vector<int>adj[]={{},{2,3},{1,3},{1,2}};
    cout<<cycle(3,adj);
    return 0;
}

