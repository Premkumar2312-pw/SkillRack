#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<pair<int, char>> p;
    int i = 0;

    while (i < s.length()) {
        int n = 0;
        while (i < s.length() && isdigit(s[i])) {
            n = n * 10 + (s[i] - '0');
            i++;
        }
        if (i < s.length() && isalpha(s[i])) {
            p.push_back({n, s[i]});
            i++;
        }
    }

    for (int i = 0; i < p.size(); i++) {
        string t = "";
        for (int j = i; j < p.size(); j++) {
            t += p[j].second;
        }
        for (int k = 0; k < p[i].first; k++) {
            cout << t;
        }
        cout << endl;
    }

    return 0;
}