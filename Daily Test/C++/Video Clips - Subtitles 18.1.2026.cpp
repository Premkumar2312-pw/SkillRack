#include <bits/stdc++.h>
using namespace std;

struct Sub {
    int s, e;
    string txt;
};

int toSec(string t) {
    int m, s;
    sscanf(t.c_str(), "%d:%d", &m, &s);
    return m * 60 + s;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<Sub> a(n);

    for (int i = 0; i < n; i++) {
        string t, line;
        cin >> t;
        cin.ignore();
        getline(cin, line);

        int p = line.find_last_of(' ');
        int dur = stoi(line.substr(p + 1));

        a[i].s = toSec(t);
        a[i].e = a[i].s + dur;
        a[i].txt = line.substr(1, p - 1);
    }

    string xs, ys;
    cin >> xs >> ys;
    int x = toSec(xs), y = toSec(ys);

    bool ok = false;
    for (int t = x; t <= y && !ok; t++)
        for (auto &s : a)
            if (s.s <= t && t < s.e) ok = true;

    if (!ok) {
        cout << -1;
        return 0;
    }

    for (int t = x; t <= y; t++) {
        cout << setw(2) << setfill('0') << t / 60 << ":"
             << setw(2) << t % 60;
        bool first = true;
        for (auto &s : a) {
            if (s.s <= t && t < s.e) {
                cout << (first ? " " : " | ") << s.txt;
                first = false;
            }
        }
        cout << "\n";
    }
}