#include <iostream>
using namespace std;
int main() {
    string s; cin >> s;
    int v = s[0] == 'T', i = 1, n;
    while (i < s.length()) {
        n = s[i+1] == 'T';
        if (s[i] == '&') v &= n;
        else if (s[i] == '|') v |= n;
        else if (s[i] == '^') v ^= n;
        i += 2;
    }
    cout << (v ? 'T' : 'F');
}