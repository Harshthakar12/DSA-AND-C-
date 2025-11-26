// 13_JobScheduling.cpp
#include <bits/stdc++.h>
using namespace std;

/*
 Job Scheduling with deadlines to maximize profit (Greedy).
 Input:
 n
 for each job: id deadline profit
*/

int jobScheduling(vector<tuple<int,int,int>>& jobs){
    sort(jobs.begin(), jobs.end(), [](auto &A, auto &B){
        return get<2>(A) > get<2>(B); // sort by profit desc
    });
    int maxDeadline = 0;
    for(auto &t: jobs) maxDeadline = max(maxDeadline, get<1>(t));
    vector<int> slot(maxDeadline+1, -1);
    int profit=0;
    for(auto &t: jobs){
        int id=get<0>(t), d=get<1>(t), p=get<2>(t);
        for(int j=d;j>0;--j){
            if(slot[j]==-1){
                slot[j]=id;
                profit += p;
                break;
            }
        }
    }
    return profit;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    vector<tuple<int,int,int>> jobs(n);
    for(int i=0;i<n;++i){
        int id,d,p; cin>>id>>d>>p;
        jobs[i] = make_tuple(id,d,p);
    }
    cout<<jobScheduling(jobs)<<"\n";
    return 0;
}
