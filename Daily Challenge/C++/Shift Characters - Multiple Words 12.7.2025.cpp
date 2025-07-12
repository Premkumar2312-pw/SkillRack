#include <iostream>
#include <vector>
#include <string>
using namespace std;

string rotate(const string &s, int k) {
    int n = s.length();
    k %= n;
    return s.substr(n - k) + s.substr(0, n - k);
}

int main() {
    vector<string> words;
    string t;
    int k, unchanged = 0;

    while (cin >> t) {
        bool isDigit = all_of(t.begin(), t.end(), ::isdigit);
        if (isDigit) {
            k = stoi(t);
            break;
        }
        words.push_back(t);
    }

    vector<string> res;
    for (auto &w : words) {
        string rot = rotate(w, k);
        if (rot == w) unchanged++;
        res.push_back(rot);
    }

    cout << unchanged << "\n";
    for (auto &w : res) cout << w << " ";
}