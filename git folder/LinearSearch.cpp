// 05_LinearSearch.cpp
#include <bits/stdc++.h>
using namespace std;

int linearSearch(const vector<int>& a, int key){
    for(size_t i=0;i<a.size();++i)
        if(a[i]==key) return (int)i;
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    int key; cin>>key;
    cout<<linearSearch(a,key)<<"\n";
    return 0;
}
