#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    int k, t = 0;
    cin >> s >> k;
    unordered_map<char, int> c, p;
    for (char ch : s) {
        c[ch]++;
        if (c[ch] > k) continue;
        if (c[ch] == 1) p[ch] = 1;
        else p[ch] *= 2;
        t += p[ch];
    }
    cout << t;
    return 0;
}