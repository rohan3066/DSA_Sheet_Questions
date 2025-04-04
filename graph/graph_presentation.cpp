#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjecency_matrix(int n, int m) {
    vector<vector<int>> matrix(n, vector<int>(n, 0)); // Correct size (n x n)

    for (int i = 0; i < m; i++) { // Loop for m edges
        int u, v;
        cin >> u >> v;

        // Assuming input vertices are 0-based (0 to n-1)
        if (u >= 0 && u < n && v >= 0 && v < n) {
            matrix[u][v] = 1;
            matrix[v][u] = 1; // For undirected graph
        } else {
            cout << "Invalid edge (" << u << ", " << v << ")!" << endl;
        }
    }

    return matrix;
}


vector<vector<int>> adjecency_matrix_weight(int n, int m) {
    vector<vector<int>> matrix(n, vector<int>(n, 0)); // Correct size (n x n)

    for (int i = 0; i < m; i++) { // Loop for m edges
        int u, v,wt;
        cout<<"enter vertices :";
        cin >> u >> v;
        cout<<"Enter weight : ";
        cin>>wt;


        // Assuming input vertices are 0-based (0 to n-1)
        if (u >= 0 && u < n && v >= 0 && v < n) {
            matrix[u][v] = wt;
            matrix[v][u] = wt; // For undirected graph
        } else {
            cout << "Invalid edge (" << u << ", " << v << ")!" << endl;
        }
    }

    return matrix;
}

void adjList(int V,int m){
    vector<int>adj[V+1];

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(u);
        adj[v].push_back(u);
    }

    for(int i=0;i<V;i++){
        for(auto &it :adj[i]){
            cout<<it<<" ";
        }
        cout<<endl;


    }

}



int main() {
    // int n = 5, m = 6; // Example: 5 nodes, 6 edges
    // vector<vector<int>> res = adjecency_matrix_weight(n, m);

    // // Printing adjacency matrix
    // for (int i = 0; i < res.size(); i++) {
    //     for (int j = 0; j < res[i].size(); j++) {
    //         cout << res[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    adjList(7,6);
    



    return 0;
}
