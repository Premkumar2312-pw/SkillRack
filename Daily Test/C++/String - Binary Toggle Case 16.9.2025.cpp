#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;

    string bin;
    while (k > 0) {
        bin.push_back((k % 2) + '0');
        k /= 2;
    }
    reverse(bin.begin(), bin.end());

    int n = bin.size();
    string result;
    for (int i = 0; i < n; i++) {
        if (bin[i] == '0')
            result.push_back(tolower(s[i]));
        else
            result.push_back(toupper(s[i]));
    }
    result += s.substr(n);
    cout << result << "\n";

    int m = s.size() - n;
    string res = s.substr(0, m);
    for (int i = 0; i < n; i++) {
        if (bin[i] == '0')
            res.push_back(tolower(s[i + m]));
        else
            res.push_back(toupper(s[i + m]));
    }
    cout << res << "\n";
    return 0;
}