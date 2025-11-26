#include <bits/stdc++.h>
using namespace std;

struct Job {
    int id, deadline, profit;
};

int main() {
    int n;
    cin >> n;
    vector<Job> a(n);
    for(int i=0;i<n;i++) cin >> a[i].id >> a[i].deadline >> a[i].profit;

    sort(a.begin(), a.end(), [](auto &x, auto &y){
        return x.profit > y.profit;
    });

    int maxd = 0;
    for(auto &j : a) maxd = max(maxd, j.deadline);

    vector<int> slot(maxd+1,-1);

    int totalProfit = 0;
    vector<int> result;
    
    for(auto &j : a){
        for(int t=j.deadline; t>0; t--){
            if(slot[t]==-1){
                slot[t]=j.id;
                totalProfit += j.profit;
                result.push_back(j.id);
                break;
            }
        }
    }

    cout << "Jobs: ";
    for(int x: result) cout << x << " ";
    cout << "\nProfit: " << totalProfit << "\n";
}
