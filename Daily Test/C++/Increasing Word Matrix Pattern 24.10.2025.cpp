#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s = "abcdefghijklmnopqrstuvwxyz";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n + i; j++) {
            if (j < 26)
                cout << s.substr(0, j);
            else {
                int len = j % 26;
                cout << s.substr(0, len) << s.substr(0, len);
            }
            cout << ' ';
        }
        cout << endl;
    }
    return 0;
}