// 08_MergeSort.cpp
#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int>& a, int l, int r){
    if(l>=r) return;
    int m = l + (r-l)/2;
    mergeSort(a,l,m);
    mergeSort(a,m+1,r);
    vector<int> tmp;
    int i=l,j=m+1;
    while(i<=m && j<=r){
        if(a[i]<=a[j]) tmp.push_back(a[i++]);
        else tmp.push_back(a[j++]);
    }
    while(i<=m) tmp.push_back(a[i++]);
    while(j<=r) tmp.push_back(a[j++]);
    for(size_t k=0;k<tmp.size();++k) a[l+k]=tmp[k];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    mergeSort(a,0,n-1);
    for(int x:a) cout<<x<<' ';
    cout<<"\n";
    return 0;
}
