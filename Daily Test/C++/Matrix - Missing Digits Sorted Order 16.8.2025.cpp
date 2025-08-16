#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<string>> a(r, vector<string>(c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    for (int i0 = 0; i0 < r; i0 += 3) {
        for (int j0 = 0; j0 < c; j0 += 3) {
            set<int> seen;
            vector<pair<int,int>> holes;
            for (int i = i0; i < i0+3; i++) {
                for (int j = j0; j < j0+3; j++) {
                    if (a[i][j] == "-")
                        holes.push_back({i,j});
                    else
                        seen.insert(stoi(a[i][j]));
                }
            }
            vector<int> miss;
            for (int num=1; num<=9; num++)
                if (!seen.count(num)) miss.push_back(num);
            for (int k=0; k<holes.size(); k++)
                a[holes[k].first][holes[k].second] = to_string(miss[k]);
        }
    }

    for (auto &row : a) {
        for (auto &x : row) cout << x << " ";
        cout << "\n";
    }
}