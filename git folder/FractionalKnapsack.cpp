// 12_FractionalKnapsack.cpp
#include <bits/stdc++.h>
using namespace std;

struct Item{ double w; double v; };

double fractionalKnapsack(vector<Item>& items, double W){
    sort(items.begin(), items.end(), [](const Item& a,const Item& b){
        return (a.v/a.w) > (b.v/b.w);
    });
    double val=0;
    for(auto &it: items){
        if(W<=0) break;
        if(it.w <= W){
            W -= it.w;
            val += it.v;
        } else {
            val += it.v * (W / it.w);
            W = 0;
        }
    }
    return val;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; double W;
    if(!(cin>>n>>W)) return 0;
    vector<Item> items(n);
    for(int i=0;i<n;++i) cin>>items[i].w>>items[i].v;
    cout<<fixed<<setprecision(6)<<fractionalKnapsack(items,W)<<"\n";
    return 0;
}
