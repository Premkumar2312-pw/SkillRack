#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<string>> cal;
    string s;
    while (getline(cin, s)) {
        stringstream ss(s);
        vector<string> row;
        string val;
        while (ss >> val) row.push_back(val);
        cal.push_back(row);
    }

    int r = cal.size(), c = cal[0].size(), p = -1;
    vector<string> wd = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    if (c == 7) {
        for (int i = 0; i < r && p == -1; i++)
            for (int j = 0; j < c; j++)
                if (isdigit(cal[i][j][0]) || cal[i][j] == "#") {
                    p = j;
                    break;
                }
    } else {
        for (int j = 0; j < c && p == -1; j++)
            for (int i = 0; i < r; i++)
                if (isdigit(cal[i][j][0]) || cal[i][j] == "#") {
                    p = i;
                    break;
                }
    }

    vector<string> d2w(32);
    for (int i = 1; i <= 31; i++)
        d2w[i] = wd[(p + i - 1) % 7];

    unordered_map<int, int> dc;
    int hc = 0;

    if (c == 7) {
        for (auto &row : cal)
            for (auto &val : row) {
                if (val == "#") hc++;
                else if (isdigit(val[0])) dc[stoi(val)]++;
            }
    } else {
        for (int j = 0; j < c; j++)
            for (int i = 0; i < r; i++) {
                string &val = cal[i][j];
                if (val == "#") hc++;
                else if (isdigit(val[0])) dc[stoi(val)]++;
            }
    }

    for (auto [k, v] : dc)
        if (v == 1) hc++;

    bool found = false;
    for (int i = 1; i <= hc; i++) {
        if (dc.find(i) == dc.end()) {
            found = true;
            cout << i << " " << d2w[i] << endl;
        }
    }

    if (!found)
        cout << "-1\n";

    return 0;
}