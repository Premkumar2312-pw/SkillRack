#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int mn = s1.size(), mx = -1;
    for (char c : s2) {
        int pos = s1.find(c);
        if (pos < mn) mn = pos;
        if (pos > mx) mx = pos;
    }
    cout << s1.substr(mn, mx - mn + 1);
    return 0;
}