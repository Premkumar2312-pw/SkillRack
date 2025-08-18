#include <bits/stdc++.h>
using namespace std;
int main() {
    string n; cin >> n;
    int res = 0;
    for (int i = 0; i < n.size(); i++) {
        int d = n[i] - '0';
        string b = bitset<4>(d).to_string();
        b.erase(0, b.find('1'));
        if (b.empty()) b = "0";
        string t = n.substr(0, i) + b + n.substr(i+1);
        int num = stoi(t);
        res = max(res, num);
    }
    cout << res << endl;
}