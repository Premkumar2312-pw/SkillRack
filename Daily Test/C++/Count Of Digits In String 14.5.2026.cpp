#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x;

    vector<string> str(n);

    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }

    for(string w : str) {

        int cnt = 0;

        for(char ch : w) {

            if(isdigit(ch) && (ch - '0') == x) {
                cnt++;
            }
        }

        cout << cnt << " ";
    }

    return 0;
}