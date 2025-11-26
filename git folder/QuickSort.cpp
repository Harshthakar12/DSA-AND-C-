// 09_QuickSort.cpp
#include <bits/stdc++.h>
using namespace std;

int partition_(vector<int>& a, int l, int r){
    int pivot = a[r];
    int i=l-1;
    for(int j=l;j<r;++j){
        if(a[j]<=pivot){
            ++i; swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}

void quickSort(vector<int>& a, int l, int r){
    if(l<r){
        int p = partition_(a,l,r);
        quickSort(a,l,p-1);
        quickSort(a,p+1,r);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    quickSort(a,0,n-1);
    for(int x:a) cout<<x<<' ';
    cout<<"\n";
    return 0;
}
