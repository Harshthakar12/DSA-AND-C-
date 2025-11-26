// 16_01Knapsack_DP.cpp
#include <bits/stdc++.h>
using namespace std;

// classic 0/1 knapsack using DP (values as ints)
int knapSack(int W, const vector<int>& wt, const vector<int>& val){
    int n = wt.size();
    vector<int> dp(W+1,0);
    for(int i=0;i<n;++i){
        for(int w=W; w>=wt[i]; --w){
            dp[w] = max(dp[w], dp[w-wt[i]] + val[i]);
        }
    }
    return dp[W];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,W; if(!(cin>>n>>W)) return 0;
    vector<int> wt(n), val(n);
    for(int i=0;i<n;++i) cin>>wt[i];
    for(int i=0;i<n;++i) cin>>val[i];
    cout<<knapSack(W, wt, val)<<"\n";
    return 0;
}
