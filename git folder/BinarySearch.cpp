// 06_BinarySearch.cpp
#include <bits/stdc++.h>
using namespace std;

// returns index or -1 (array must be sorted ascending)
int binarySearch(const vector<int>& a, int key){
    int l=0, r=(int)a.size()-1;
    while(l<=r){
        int m = l + (r-l)/2;
        if(a[m]==key) return m;
        else if(a[m]<key) l=m+1;
        else r=m-1;
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    int key; cin>>key;
    cout<<binarySearch(a,key)<<"\n";
    return 0;
}
