#include <bits/stdc++.h>
using namespace std;

int toMin(string t) {
    return stoi(t.substr(0,2)) * 60 + stoi(t.substr(3,2));
}

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> arr(n);

    for (int i = 0; i < n; i++) {
        string s, e;
        cin >> s >> e;
        arr[i] = {toMin(s), toMin(e)};
    }

    sort(arr.begin(), arr.end());

    int freeTime = 0, prevEnd = 0;

    for (auto &p : arr) {
        if (p.first > prevEnd)
            freeTime += p.first - prevEnd;
        prevEnd = max(prevEnd, p.second);
    }

    freeTime += 1440 - prevEnd;
    cout << freeTime;
}