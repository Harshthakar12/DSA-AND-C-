// 11_01Knapsack_Greedy.cpp
#include <bits/stdc++.h>
using namespace std;

/*
 Greedy for 0/1 knapsack (by value/weight) is NOT guaranteed optimal.
 This demonstrates the greedy heuristic and returns an approximate solution.
*/

struct Item{ int w; int v; int idx; };

int greedy01Knapsack(vector<Item>& items, int W){
    sort(items.begin(), items.end(), [](const Item& a,const Item& b){
        double ra = (double)a.v / a.w;
        double rb = (double)b.v / b.w;
        if(ra==rb) return a.w < b.w;
        return ra>rb;
    });
    int totalValue=0, used=0;
    for(auto &it: items){
        if(used + it.w <= W){
            used += it.w;
            totalValue += it.v;
        }
    }
    return totalValue;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,W; if(!(cin>>n>>W)) return 0;
    vector<Item> items(n);
    for(int i=0;i<n;++i){
        cin>>items[i].w>>items[i].v;
        items[i].idx=i;
    }
    cout<<greedy01Knapsack(items, W)<<"\n";
    return 0;
}
