#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i = 0, d = 0, t = 0;
    while (i < s.size()) {
        if (s[i] == '(') d++, i++;
        else if (s[i] == ')') d--, i++;
        else if (isdigit(s[i])) {
            int n = 0;
            while (i < s.size() && isdigit(s[i]))
                n = n * 10 + (s[i++] - '0');
            t += n * d;
        } else i++;
    }
    cout << t << endl;
    return 0;
}