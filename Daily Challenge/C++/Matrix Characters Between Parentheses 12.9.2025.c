#include <bits/stdc++.h>
using namespace std;
int main() {
    int R, C;
    cin >> R >> C;
    string s, row;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            char ch;
            cin >> ch;
            s.push_back(ch);
        }
    }
    int a = s.find('(');
    int b = s.find(')');
    if (a < b)
        cout << s.substr(a + 1, b - a - 1);
    else
        cout << s.substr(a + 1) << s.substr(0, b);
    cout << "\n";
    return 0;
}