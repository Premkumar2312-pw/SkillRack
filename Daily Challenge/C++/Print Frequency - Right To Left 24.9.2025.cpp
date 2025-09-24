#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        char m = s[i];
        int cnt = 0;
        for (int j = i; j < n; j++) {
            if (s[j] == m) cnt++;
        }
        cout << m << cnt << " ";
    }
    return 0;
}