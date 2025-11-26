// 18_RabinKarp.cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> rabinKarp(const string& txt, const string& pat){
    vector<int> occ;
    int n=txt.size(), m=pat.size();
    if(m>n) return occ;
    const long long base=256;
    const long long mod=1000000007LL;
    long long h=1;
    for(int i=0;i<m-1;++i) h = (h*base)%mod;
    long long p=0, t=0;
    for(int i=0;i<m;++i){
        p = (p*base + pat[i])%mod;
        t = (t*base + txt[i])%mod;
    }
    for(int i=0;i<=n-m;++i){
        if(p==t){ // possible match, verify
            if(txt.substr(i,m)==pat) occ.push_back(i);
        }
        if(i < n-m){
            t = ( (t - txt[i]*h)%mod + mod)%mod;
            t = (t*base + txt[i+m])%mod;
        }
    }
    return occ;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string txt,pat;
    if(!(cin>>txt>>pat)) return 0;
    auto occ = rabinKarp(txt,pat);
    for(int i: occ) cout<<i<<" ";
    cout<<"\n";
    return 0;
}
