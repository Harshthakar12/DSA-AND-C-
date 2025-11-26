// 04_CountingSort.cpp
#include <bits/stdc++.h>
using namespace std;

// Stable counting sort for non-negative integers
void countingSort(vector<int>& a){
    if(a.empty()) return;
    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());
    int range = mx - mn + 1;
    vector<int> cnt(range,0);
    for(int x:a) cnt[x - mn]++;
    for(int i=1;i<range;++i) cnt[i]+=cnt[i-1];
    vector<int> out(a.size());
    for(int i=(int)a.size()-1;i>=0;--i){
        out[--cnt[a[i]-mn]] = a[i];
    }
    a.swap(out);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    countingSort(a);
    for(int x:a) cout<<x<<' ';
    cout<<"\n";
    return 0;
}
