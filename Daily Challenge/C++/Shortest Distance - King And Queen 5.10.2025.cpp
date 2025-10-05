#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<string>> m(n, vector<string>(n));
    vector<pair<int, int>> l;
    int f = 0, d = 0;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> m[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            if(m[i][j] == "K") { f = i; d = j; }
            if(m[i][j] == "Q") l.push_back({i, j});
        }

    vector<int> l3;
    for(auto [i, j] : l) {
        if(abs(f - i) == 0) l3.push_back(abs(d - j));
        if(abs(d - j) == 0) l3.push_back(abs(f - i));
        if(abs(d - j) == abs(f - i)) l3.push_back(abs(f - i));
    }

    if(l3.empty())
        cout << -1 << endl;
    else
        cout << *min_element(l3.begin(), l3.end()) << endl;
    return 0;
}