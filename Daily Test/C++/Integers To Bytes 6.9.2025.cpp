#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> mat(N);
    for (int i = 0; i < N; i++) cin >> mat[i];

    string s = "";
    for (int x : mat) {
        string bin = "";
        while (x > 0) {
            bin = char((x % 2) + '0') + bin;
            x /= 2;
        }
        s += bin;
    }

    reverse(s.begin(), s.end());

    vector<int> e;
    for (int i = 0; i < (int)s.size(); i += 8) {
        string q = s.substr(i, 8);
        reverse(q.begin(), q.end());
        e.push_back(stoi(q, nullptr, 2));
    }

    reverse(e.begin(), e.end());
    for (int x : e) cout << x << " ";
}