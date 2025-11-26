// 14_ActivitySelection.cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<pair<int,int>> acts(n);
    for(int i=0;i<n;++i) cin>>acts[i].second>>acts[i].first; // input: start end, store as (end,start)
    sort(acts.begin(), acts.end());
    int cnt=0, lastEnd = -1;
    for(auto &p: acts){
        int start = p.second, end = p.first;
        if(start > lastEnd){
            cnt++;
            lastEnd = end;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
