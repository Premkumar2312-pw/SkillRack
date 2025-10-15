#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, d = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s, l1;
        cin >> s;
        char s1 = s[0];
        int c = 0;
        for (size_t j = 0; j < s.size(); j++) {
            if (s[j] == s1) {
                c++;
                if (c > s[j] - '0') c = 1;
                if (c == s[j] - '0') {
                    l1 += s1;
                    c = 0;
                }
            } else {
                s1 = s[j];
                c = 1;
                if ((s1 - '0') == c) l1 += s1;
            }
        }
        d += stoi(l1);
    }
    cout << d << endl;
    return 0;
}