#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int m = n / 2;

    string first = s.substr(0, m);
    reverse(first.begin(), first.end());

    if(n % 2 == 1) {
        char mid = s[m];
        string second = s.substr(m+1);
        reverse(second.begin(), second.end());
        cout << first + mid + second;
    } else {
        string second = s.substr(m);
        reverse(second.begin(), second.end());
        cout << first + second;
    }
}