#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> a(n);
    unordered_map<string,int> mp = {
        {"zero",0},{"one",1},{"two",2},{"three",3},{"four",4},
        {"five",5},{"six",6},{"seven",7},{"eight",8},{"nine",9}
    };

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s >> a[i].second;
        string cur = "";
        int num = 0;

        for (char c : s) {
            cur += c;
            if (mp.count(cur)) {
                num = num * 10 + mp[cur];
                cur.clear();
            }
        }
        a[i].first = num;
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i].first == a[j].second)
                cout << j + 1 << " ";
}