// 21_NQueen.cpp
#include <bits/stdc++.h>
using namespace std;

bool solveNQUtil(int col, vector<int>& leftRow, vector<int>& upperDiag, vector<int>& lowerDiag, vector<int>& pos, int n){
    if(col==n) return true;
    for(int row=0;row<n;++row){
        if(leftRow[row]==0 && lowerDiag[row+col]==0 && upperDiag[n-1 + col - row]==0){
            pos[col]=row;
            leftRow[row]=lowerDiag[row+col]=upperDiag[n-1 + col - row]=1;
            if(solveNQUtil(col+1, leftRow, upperDiag, lowerDiag, pos, n)) return true;
            leftRow[row]=lowerDiag[row+col]=upperDiag[n-1 + col - row]=0;
        }
    }
    return false;
}

vector<int> solveNQueen(int n){
    vector<int> pos(n,-1);
    vector<int> leftRow(n,0), upperDiag(2*n-1,0), lowerDiag(2*n-1,0);
    if(solveNQUtil(0,leftRow,upperDiag,lowerDiag,pos,n)) return pos;
    return {};
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    auto res = solveNQueen(n);
    if(res.empty()) { cout<<"No solution\n"; return 0; }
    // print board as positions (col -> row)
    for(int i=0;i<n;++i) cout<<res[i]<<(i+1==n?'\n':' ');
    return 0;
}
