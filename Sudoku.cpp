#include <bits/stdc++.h>
using namespace std;
int rows[9], cols[9], boxes[9];
int board[9][9];
vector<pair<int,int>> empties;
bool solve(int idx){
    if(idx==(int)empties.size()) return true;
    int r=empties[idx].first, c=empties[idx].second;
    int b=(r/3)*3 + (c/3);
    int mask = ~(rows[r] | cols[c] | boxes[b]) & 0x1FF;
    while(mask){
        int bit = mask & -mask;
        int d = __builtin_ctz(bit);
        int val = d+1;
        board[r][c]=val;
        rows[r] |= (1<<d);
        cols[c] |= (1<<d);
        boxes[b] |= (1<<d);
        if(solve(idx+1)) return true;
        rows[r] &= ~(1<<d);
        cols[c] &= ~(1<<d);
        boxes[b] &= ~(1<<d);
        board[r][c]=0;
        mask &= mask-1;
    }
    return false;
}
int main(){
    for(int i=0;i<9;i++) for(int j=0;j<9;j++) board[i][j]=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(!(cin>>board[i][j])) return 0;
            if(board[i][j]){
                int d = board[i][j]-1;
                rows[i] |= (1<<d);
                cols[j] |= (1<<d);
                boxes[(i/3)*3 + (j/3)] |= (1<<d);
            } else empties.emplace_back(i,j);
        }
    }
    if(solve(0)){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<board[i][j]<<(j==8?'\n':' ');
            }
        }
    } else cout<<"No solution\n";
    return 0;
}
