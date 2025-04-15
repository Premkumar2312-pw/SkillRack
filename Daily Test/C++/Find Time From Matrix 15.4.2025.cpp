#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<string>> m(12, vector<string>(12));
    for (int i = 0; i < 12; ++i)
        for (int j = 0; j < 12; ++j)
            cin >> m[i][j];

    vector<pair<int, string>> res;
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            if (m[i][j] == "A" || m[i][j] == "P") {
                int h = i + 1;
                int mins = j * 5;
                int th = (h == 12) ? (m[i][j] == "A" ? 0 : 12) : (m[i][j] == "A" ? h : h + 12);
                int total = th * 60 + mins;
                int disp_h = (h == 12 || h == 0) ? 12 : h;
                char buf[10];
                sprintf(buf, "%02d:%02d %sM", disp_h, mins, m[i][j].c_str());
                res.emplace_back(total, string(buf));
            }
        }
    }

    sort(res.begin(), res.end());
    for (auto &p : res)
        cout << p.second << endl;

    return 0;
}
