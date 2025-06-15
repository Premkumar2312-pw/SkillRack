#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string m[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

int getMonth(string s) {
    for (int i = 0; i < 12; i++)
        if (m[i] == s) return i + 1;
    return 0;
}

struct T {
    int d, m, y;
    string s;
};

bool cmp(T a, T b) {
    if (a.d != b.d) return a.d < b.d;
    if (a.m != b.m) return a.m < b.m;
    return a.y < b.y;
}

int main() {
    int n;
    cin >> n;
    vector<T> v(n);
    for (int i = 0; i < n; i++) {
        string date, mon;
        cin >> date;
        v[i].s = date;
        v[i].d = stoi(date.substr(0, 2));
        mon = date.substr(3, 3);
        v[i].m = getMonth(mon);
        v[i].y = stoi(date.substr(7));
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v) cout << x.s << endl;
}