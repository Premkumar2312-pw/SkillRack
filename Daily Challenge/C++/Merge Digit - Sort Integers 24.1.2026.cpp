#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> res;

    for (int i = 0; i < N; i += 2) {
        int a, b;
        cin >> a >> b;

        int ah = a / 100, at = (a / 10) % 10, ao = a % 10;
        int bh = b / 100, bt = (b / 10) % 10, bo = b % 10;

        int merged =
            max(ah, bh) * 100000 +
            min(ah, bh) * 10000 +
            max(at, bt) * 1000 +
            min(at, bt) * 100 +
            max(ao, bo) * 10 +
            min(ao, bo);

        res.push_back(merged);
    }

    sort(res.begin(), res.end());

    for (int x : res)
        cout << x << " ";
}