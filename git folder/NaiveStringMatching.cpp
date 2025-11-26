// 17_NaiveStringMatching.cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> naiveSearch(const string& txt, const string& pat){
    vector<int> occ;
    int n = txt.size(), m = pat.size();
    for(int i=0;i+ m<=n; ++i){
        int j=0;
        while(j<m && txt[i+j]==pat[j]) ++j;
        if(j==m) occ.push_back(i);
    }
    return occ;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string txt, pat;
    if(!(cin>>txt>>pat)) return 0;
    auto occ = naiveSearch(txt,pat);
    for(int pos: occ) cout<<pos<<" ";
    cout<<"\n";
    return 0;
}
