#include <bits/stdc++.h>
using namespace std;

int main() {
    string n, a;
    cin >> n >> a;
    sort(n.begin(), n.end());
    set<int> s;
    do s.insert(stoi(n));
    while (next_permutation(n.begin(), n.end()));
    int ai = stoi(a);
    for (int x : s)
        if (x >= ai) {
            cout << x;
            return 0;
        }
    return 0;
}