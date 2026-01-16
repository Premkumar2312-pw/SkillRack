#include <bits/stdc++.h>
using namespace std;

bool isPal(string s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++; j--;
    }
    return true;
}

int main() {
    string str;
    cin >> str;

    for (int i = 1; i < str.size(); i++) {
        string left = str.substr(0, i);
        string right = str.substr(i);

        if (isPal(left) && isPal(right)) {
            cout << left << "\n" << right;
            break;
        }
    }
}