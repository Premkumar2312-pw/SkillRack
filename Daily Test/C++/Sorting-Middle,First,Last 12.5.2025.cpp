#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct String {
    string str;
    int index;
};

bool compare(const String &a, const String &b) {
    int lenA = a.str.length(), lenB = b.str.length();
    char midA = a.str[lenA / 2], midB = b.str[lenB / 2];

    if (midA != midB) return midA < midB;
    if (a.str[0] != b.str[0]) return a.str[0] < b.str[0];
    if (a.str[lenA - 1] != b.str[lenB - 1]) return a.str[lenA - 1] < b.str[lenB - 1];
    return a.index < b.index;
}

int main() {
    int n;
    cin >> n;
    vector<String> s(n);

    for (int i = 0; i < n; i++) {
        cin >> s[i].str;
        s[i].index = i;
    }

    sort(s.begin(), s.end(), compare);

    for (const auto &item : s)
        cout << item.str << endl;

    return 0;
}