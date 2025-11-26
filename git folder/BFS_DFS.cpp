// 19_BFS_DFS.cpp
#include <bits/stdc++.h>
using namespace std;

void bfs(int s, const vector<vector<int>>& adj){
    int n = adj.size();
    vector<int> vis(n,0);
    queue<int> q; q.push(s); vis[s]=1;
    while(!q.empty()){
        int u=q.front(); q.pop();
        cout<<u<<" ";
        for(int v: adj[u]) if(!vis[v]){ vis[v]=1; q.push(v); }
    }
    cout<<"\n";
}

void dfsUtil(int u, const vector<vector<int>>& adj, vector<int>& vis){
    vis[u]=1; cout<<u<<" ";
    for(int v: adj[u]) if(!vis[v]) dfsUtil(v,adj,vis);
}

void dfs(int s, const vector<vector<int>>& adj){
    vector<int> vis(adj.size(),0);
    dfsUtil(s,adj,vis);
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; if(!(cin>>n>>m)) return 0;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;++i){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int s; cin>>s;
    bfs(s,adj);
    dfs(s,adj);
    return 0;
}
