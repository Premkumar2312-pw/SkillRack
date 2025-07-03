#include <iostream>
using namespace std;

int main() {
    string d[6][3] = {
        {"- - -", "- * -", "- - -"},
        {"* - -", "- - -", "- - *"},
        {"* - -", "- * -", "- - *"},
        {"* - *", "- - -", "* - *"},
        {"* - *", "- * -", "* - *"},
        {"* - *", "* - *", "* - *"}
    };

    string s;
    cin >> s;

    for (char ch : s) {
        int idx = ch - '1';
        for (int i = 0; i < 3; i++) {
            cout << d[idx][i] << '\n';
        }
    }
    return 0;
}