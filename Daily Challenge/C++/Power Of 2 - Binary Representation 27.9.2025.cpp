#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    string bin = bitset<32>(n).to_string();
    bin.erase(0, bin.find('1')); 
    int len = bin.size();
    bool first = true;
    for (int i = 0; i < len; i++) {
        if (bin[i] == '1') {
            if (!first) cout << "+";
            cout << (1 << (len - i - 1));
            first = false;
        }
    }
}