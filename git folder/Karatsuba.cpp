// 10_Karatsuba.cpp
#include <bits/stdc++.h>
using namespace std;

// Karatsuba multiplication on big integers represented as strings
// Simpler: use long long for moderate numbers, and karatsuba for long long split
using ll = long long;

ll karatsuba(ll x, ll y){
    if(x<10 || y<10) return x*y;
    int n = max( (int)to_string(x).size(), (int)to_string(y).size() );
    int m = n/2;
    ll pow10 = 1;
    for(int i=0;i<m;++i) pow10 *= 10;
    ll a = x / pow10;
    ll b = x % pow10;
    ll c = y / pow10;
    ll d = y % pow10;
    ll ac = karatsuba(a,c);
    ll bd = karatsuba(b,d);
    ll adbc = karatsuba(a+d, c+b) - ac - bd;
    return ac * (pow10*pow10) + adbc * pow10 + bd;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x,y; 
    if(!(cin>>x>>y)) return 0;
    cout<<karatsuba(x,y)<<"\n";
    return 0;
}
