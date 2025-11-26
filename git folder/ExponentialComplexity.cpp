// 07_ExponentialComplexity.cpp
#include <bits/stdc++.h>
using namespace std;

/*
 Demonstrates:
  - O(N): linear scan sum
  - O(log N): binary exponent search (finding highest power of 2 <= N)
*/

long long linearSum(int n){
    long long s=0;
    for(int i=1;i<=n;++i) s+=i;
    return s;
}

int highestPowerOf2_leq(int n){
    int p=1;
    while(p*2<=n) p*=2;
    return p;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    cout<< "Linear sum (O(N)) = " << linearSum(n) << "\n";
    cout<< "Highest power of 2 <= n (computed in O(log n) steps) = " << highestPowerOf2_leq(n) << "\n";
    return 0;
}
