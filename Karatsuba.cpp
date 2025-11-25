#include <bits/stdc++.h>
using namespace std;

string addStr(string a, string b){
    string res = "";
    int carry = 0, i = a.size()-1, j = b.size()-1;
    while(i >= 0 || j >= 0 || carry){
        int s = carry;
        if(i >= 0) s += a[i--] - '0';
        if(j >= 0) s += b[j--] - '0';
        res.push_back(char('0' + s % 10));
        carry = s / 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

string subStr(string a, string b){
    string res = "";
    int borrow = 0, i = a.size()-1, j = b.size()-1;
    while(i >= 0){
        int s = a[i] - '0' - borrow - (j >= 0 ? b[j] - '0' : 0);
        if(s < 0) s += 10, borrow = 1; else borrow = 0;
        res.push_back(char('0' + s));
        i--; j--;
    }
    while(res.size() > 1 && res.back() == '0') res.pop_back();
    reverse(res.begin(), res.end());
    return res;
}

string karatsuba(string x, string y){
    while(x.size() < y.size()) x = "0" + x;
    while(y.size() < x.size()) y = "0" + y;
    int n = x.size();
    if(n == 1){
        int p = (x[0]-'0') * (y[0]-'0');
        return to_string(p);
    }
    int m = n/2;
    string x1 = x.substr(0, n-m), x0 = x.substr(n-m);
    string y1 = y.substr(0, n-m), y0 = y.substr(n-m);

    string z2 = karatsuba(x1, y1);
    string z0 = karatsuba(x0, y0);
    string z1 = karatsuba(addStr(x1, x0), addStr(y1, y0));
    z1 = subStr(subStr(z1, z2), z0);

    z2 += string(2*m, '0');
    z1 += string(m, '0');

    return addStr(addStr(z2, z1), z0);
}

int main(){
    string a, b;
    cin >> a >> b;
    cout << karatsuba(a, b);
    return 0;
}
