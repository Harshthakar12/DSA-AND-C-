// 20_SudokuSolver.cpp
#include <bits/stdc++.h>
using namespace std;

bool valid(vector<vector<int>>& g, int r, int c, int val){
    for(int i=0;i<9;++i) if(g[r][i]==val || g[i][c]==val) return false;
    int br = (r/3)*3, bc=(c/3)*3;
    for(int i=br;i<br+3;++i) for(int j=bc;j<bc+3;++j) if(g[i][j]==val) return false;
    return true;
}

bool solve(vector<vector<int>>& g){
    for(int r=0;r<9;++r){
        for(int c=0;c<9;++c){
            if(g[r][c]==0){
                for(int v=1;v<=9;++v){
                    if(valid(g,r,c,v)){
                        g[r][c]=v;
                        if(solve(g)) return true;
                        g[r][c]=0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> grid(9, vector<int>(9));
    for(int i=0;i<9;++i) for(int j=0;j<9;++j) cin>>grid[i][j];
    if(solve(grid)){
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j) cout<<grid[i][j]<<" ";
            cout<<"\n";
        }
    } else cout<<"No solution\n";
    return 0;
}
