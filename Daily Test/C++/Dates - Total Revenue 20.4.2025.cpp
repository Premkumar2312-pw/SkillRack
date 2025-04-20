#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Entry {
    string date;
    int revenue;
};

bool cmp(const Entry &a, const Entry &b) {
    return a.date < b.date;
}

int main() {
    int n, x;
    cin >> n;
    vector<Entry> v(n), result;

    for (int i = 0; i < n; ++i) {
        cin >> v[i].date >> v[i].revenue;
    }

    cin >> x;

    for (auto &e : v) {
        if (e.revenue >= x) {
            result.push_back(e);
        }
    }

    if (result.empty()) {
        cout << "-1\n";
    } else {
        sort(result.begin(), result.end(), cmp);
        for (auto &e : result) {
            cout << e.date << endl;
        }
    }

    return 0;
}