#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> l(n);
    for (auto &s : l) cin >> s;

    vector<int> l1, l2, pos;

    for (auto &i : l) {
        int a = i.find('(');
        int b = i.find(')');
        pos.push_back(a);

        if (a == 0) {
            l2.push_back(stoi(i.substr(b+1)));
            l1.push_back(stoi(i.substr(a+1, b-a-1)));
        } else {
            l2.push_back(stoi(i.substr(0, a)));
            l1.push_back(stoi(i.substr(a+1, b-a-1)));
        }
    }

    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end(), greater<int>());

    for (int i = 0; i < n; i++) {
        if (pos[i] == 0)
            cout << "(" << l1[i] << ")" << l2[i] << " ";
        else
            cout << l2[i] << "(" << l1[i] << ") ";
    }
}