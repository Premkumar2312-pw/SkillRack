#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<string> getSymmetricSubstrings(string s, int m) {
    vector<string> substrings;
    int len = s.length();
    for (int ln = min(len - m - 1, m) * 2 + 1; ln > 0; ln--) {
        int h = ln / 2;
        if (h >= 0) {
            substrings.push_back(s.substr(m - h, ln));
        }
    }
    return substrings;
}

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);

    if (a.empty() || b.empty()) {
        cout << "-1\n";
        return 0;
    }

    int c = a.length() / 2, d = b.length() / 2;
    vector<string> e = getSymmetricSubstrings(a, c);
    unordered_set<string> f(getSymmetricSubstrings(b, d).begin(), getSymmetricSubstrings(b, d).end());

    for (string sub : e) {
        if (f.find(sub) != f.end()) {
            cout << sub << "\n";
            return 0;
        }
    }

    cout << "-1\n";
    return 0;
}
