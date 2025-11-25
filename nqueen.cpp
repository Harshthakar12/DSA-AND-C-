#include <bits/stdc++.h>
using namespace std;

void solve(int r, int n, vector<int>& col, vector<int>& d1, vector<int>& d2, vector<int>& pos, vector<vector<string>>& out){
    if(r==n){
        vector<string> b(n,string(n,'.'));
        for(int i=0;i<n;i++) b[i][pos[i]]='Q';
        out.push_back(b);
        return;
    }
    for(int c=0;c<n;c++){
        if(col[c]||d1[r-c+n-1]||d2[r+c]) continue;
        col[c]=d1[r-c+n-1]=d2[r+c]=1;
        pos[r]=c;
        solve(r+1,n,col,d1,d2,pos,out);
        col[c]=d1[r-c+n-1]=d2[r+c]=0;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if(!(cin>>n)) return 0;
    vector<int> col(n,0), d1(2*n-1,0), d2(2*n-1,0), pos(n,0);
    vector<vector<string>> out;
    solve(0,n,col,d1,d2,pos,out);
    cout<<out.size()<<"\n";
    for(auto &board: out){
        for(auto &row: board) cout<<row<<"\n";
        cout<<"\n";
    }
    return 0;
}
