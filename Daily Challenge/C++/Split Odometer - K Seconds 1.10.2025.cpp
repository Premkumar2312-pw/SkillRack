#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;
    int len = s.size();

    for (int i = 1; i <= k; i++) {
        for (int j = 0; j < len; j += 3) {
            string part = s.substr(j, 3);
            int num = stoi(part);
            num = (num + i) % 1000;
            cout << setw(3) << setfill('0') << num;
        }
        cout << "\n";
    }
    return 0;
}