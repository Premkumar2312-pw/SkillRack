#include <iostream>
#include <string>
using namespace std;

string toBinary(int n) {
    if(n == 0) return "0";
    string s = "";
    while(n) {
        s = char('0' + (n % 2)) + s;
        n /= 2;
    }
    return s;
}

int main() {
    int a, b;
    cin >> a >> b;
    string c = toBinary(a), d = toBinary(b);
    int maxi = max(c.size(), d.size());
    while(c.size() < maxi) c = '0' + c;
    while(d.size() < maxi) d = '0' + d;
    string ans = "";
    for(int i = maxi - 1; i >= 0; i -= 2) {
        if(c[i] == d[i]) ans += c[i];
    }
    if(ans.empty()) cout << -1 << endl;
    else {
        int res = 0;
        for(int i = ans.size()-1, p = 1; i >= 0; i--, p <<= 1)
            res += (ans[i]-'0') * p;
        cout << res << endl;
    }
    return 0;
}