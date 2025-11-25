#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string text, pattern;
    cin >> text >> pattern;

    int n = text.size(), m = pattern.size();
    if(m > n) return 0;

    const long long p = 31, mod = 1e9+7;
    long long hash_p = 0, hash_t = 0, power = 1;

    for(int i = 0; i < m; i++){
        hash_p = (hash_p * p + pattern[i]) % mod;
        hash_t = (hash_t * p + text[i]) % mod;
        if(i < m-1) power = (power * p) % mod;
    }

    vector<int> result;
    for(int i = 0; i <= n - m; i++){
        if(hash_p == hash_t){
            if(text.substr(i, m) == pattern) result.push_back(i);
        }
        if(i < n - m){
            hash_t = (hash_t - text[i] * power % mod + mod) % mod;
            hash_t = (hash_t * p + text[i + m]) % mod;
        }
    }

    for(int idx : result) cout << idx << " ";
    return 0;
}
