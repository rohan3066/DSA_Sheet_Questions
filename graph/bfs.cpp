#include<bits/stdc++.h>
using namespace std;

vector<int>bfs(int V,vector<int>adj[]){
    int vist[V]={0};
    vist[0]=1;
    queue<int>q;
    q.push(0);

    vector<int>bfs;

    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(auto &it:adj[node]){
            if(vist[it]!=1){
                vist[it]=1;
                q.push(it);

            }

        }


    }

    return bfs;

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
    vector<int>res=bfs(5,adj);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

    return 0;
}