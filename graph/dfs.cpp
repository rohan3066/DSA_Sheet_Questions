#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int>adj[],int vis[],vector<int>&ls)
{
    vis[node]=1;
    ls.push_back(node);

    for(auto &it:adj[node]){
        if(vis[it]!=1){
            dfs(it,adj,vis,ls);
        }
    }

}

vector<int>dfs_ofGraph(int V,vector<int>adj[]){
    int vis[V]={0};
    int start=0;
    vector<int>ls;
    dfs(start,adj,vis,ls);
    return ls;
}


void makeEdj(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    vector<int>adj[5];
    makeEdj(adj,0,1);
    makeEdj(adj,0,2);
    makeEdj(adj,1,2);
    makeEdj(adj,1,3);
    makeEdj(adj,2,3);
    makeEdj(adj,2,3);
    makeEdj(adj,3,4);
    vector<int>res=dfs_ofGraph(5,adj);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

    return 0;
}