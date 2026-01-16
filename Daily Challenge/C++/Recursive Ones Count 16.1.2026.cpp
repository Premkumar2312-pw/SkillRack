#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    while (true) {
        int count = 0;
        for (char c : s)
            if (c == '1') count++;

        cout << count;

        if (count == 1) break;

        cout << " ";
        s = bitset<64>(count).to_string();
        s = s.substr(s.find('1')); // remove leading zeros
    }
}