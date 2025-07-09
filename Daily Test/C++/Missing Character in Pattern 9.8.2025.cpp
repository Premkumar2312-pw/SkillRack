#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 1; i <= n / 2; i++) {
        if (n / i < 2) continue;
        string p = "";
        bool valid = true;
        for (int j = 0; j < i; j++) {
            unordered_map<char, int> freq;
            for (int k = j; k < n; k += i) {
                if (s[k] != '_') freq[s[k]]++;
            }
            if (freq.empty()) {
                valid = false;
                break;
            }
            char maxc = 0;
            int maxf = 0;
            for (auto &[ch, f] : freq) {
                if (f > maxf) maxf = f, maxc = ch;
            }
            p += maxc;
        }
        if (!valid) continue;
        bool ok = true;
        for (int j = 0; j < n; j++) {
            if (s[j] != '_' && s[j] != p[j % i]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << p[s.find('_') % i] << "\n";
            break;
        }
    }
    return 0;
}
