#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    string s;
    cin >> n >> s;
    for (char c : s) {
        int idx = c - 'A';
        if (((n >> idx) & 1) == 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}