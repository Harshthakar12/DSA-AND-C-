#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, start;
    cin >> n >> m >> start;

    vector<vector<int>> g(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> vis(n+1,0);
    queue<int> q;
    q.push(start);
    vis[start]=1;

    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout << u << " ";
        for(int v: g[u]){
            if(!vis[v]){
                vis[v]=1;
                q.push(v);
            }
        }
    }
}
