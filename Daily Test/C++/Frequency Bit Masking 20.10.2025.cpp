#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int c[26] = {0};
    for (char ch : s) c[ch - 'a']++;

    while (count(c, c + 26, 0) != 26) {
        string b = "";
        for (int i = 0; i < 26; ++i) {
            if (c[i] >= 1) {
                b += '1';
                c[i]--;
            } else {
                b += '0';
            }
        }
        reverse(b.begin(), b.end());
        cout << stoi(b, nullptr, 2) << endl;
    }
    return 0;
}