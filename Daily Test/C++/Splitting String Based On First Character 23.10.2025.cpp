#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s, s1, p;
    cin >> s;
    s1 = s + s[0];
    vector<string> segments;
    char c = s1[0];
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] == c && i > 0) {
            segments.push_back(p);
            p = "";
            c = s1[i];
        } else {
            p += s1[i];
        }
    }
    sort(segments.begin(), segments.end());
    for (auto &seg : segments) {
        cout << seg << " ";
    }
    return 0;
}