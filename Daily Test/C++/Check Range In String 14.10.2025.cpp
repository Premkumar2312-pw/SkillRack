#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    string s;
    cin >> s;
    string expected;
    for (int i = x; i <= y; i++) {
        expected += to_string(i);
    }
    if (s == expected)
        cout << "YES
";
    else
        cout << "NO
";
    return 0;
}