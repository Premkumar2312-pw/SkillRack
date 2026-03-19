#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t = "";
    cin >> s;

    vector<int> f(26, 0);
    char op = '+';

    for(int i = 0; i <= s.size(); i++) {
        char ch = (i == s.size()) ? '#' : s[i];

        if(ch == '+' || ch == '-' || ch == '#') {
            for(char c : t) {
                int idx = c - 'a';
                if(op == '+') f[idx]++;
                else f[idx]--;
            }
            op = ch;
            t = "";
        } else {
            t += ch;
        }
    }

    string pos = "", neg = "";
    for(int i = 0; i < 26; i++) {
        if(f[i] > 0) pos += string(f[i], char(i + 'a'));
        else if(f[i] < 0) neg += string(-f[i], char(i + 'a'));
    }

    cout << pos;
    if(!neg.empty()) cout << "-" << neg;

    return 0;
}