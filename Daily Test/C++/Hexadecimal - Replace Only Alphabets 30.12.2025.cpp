#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 0;
    while (n--) {
        string s, t = "";
        cin >> s;

        for (char c : s) {
            if (isdigit(c))
                t += c;
            else
                t += to_string(c - 'A' + 10);
        }
        sum += stoll(t);
    }

    cout << sum;
    return 0;
}