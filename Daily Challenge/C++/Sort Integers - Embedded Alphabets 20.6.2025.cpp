#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<string, int>> v;
    string s;

    for (int i = 0; i < n; i++) {
        cin >> s;
        string letters = "", digits = "";
        for (char ch : s) {
            if (isalpha(ch)) letters += ch;
            else if (isdigit(ch)) digits += ch;
        }
        v.push_back({letters, stoi(digits)});
    }

    sort(v.begin(), v.end());

    for (auto &p : v) {
        cout << p.second << " ";
    }
    return 0;
}