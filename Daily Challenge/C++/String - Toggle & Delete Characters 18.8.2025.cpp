#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s, b, r = "";
    cin >> s >> b;
    for (int i = 0; i < s.size(); i++) {
        if (b[i] == '1' && isalpha(s[i])) {
            if (islower(s[i])) r += toupper(s[i]);
            else r += tolower(s[i]);
        } else {
            r += s[i];
        }
    }
    cout << r;
}