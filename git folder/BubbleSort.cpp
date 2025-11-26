// 02_BubbleSort.cpp
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& a){
    int n = (int)a.size();
    for(int i=0;i<n-1;++i){
        bool swapped=false;
        for(int j=0;j<n-1-i;++j){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                swapped=true;
            }
        }
        if(!swapped) break;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    bubbleSort(a);
    for(int x:a) cout<<x<<' ';
    cout<<"\n";
    return 0;
}
