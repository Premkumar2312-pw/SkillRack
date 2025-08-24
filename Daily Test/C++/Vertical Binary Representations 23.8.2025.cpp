#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> b;
    int maxLen = 0;

    for (int i = N; i >= 1; i--) {
        string bin = bitset<64>(i).to_string();
        bin.erase(0, bin.find('1')); // remove leading 0s
        b.push_back(bin);
        maxLen = max(maxLen, (int)bin.size());
    }

    for (int i = 0; i < maxLen; i++) {
        for (auto &x : b) {
            if (i < (int)x.size()) cout << x[i];
        }
        cout << "\n";
    }
}