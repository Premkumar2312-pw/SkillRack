#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int total = 0, i = 0;
    int idx = 0;
    while (idx < s2.size()) {
        int d = 0, sign = 1;
        if (s2[idx] == '-') {
            sign = -1;
            idx++;
        }
        while (idx < s2.size() && isdigit(s2[idx])) {
            d = d * 10 + (s2[idx] - '0');
            idx++;
        }
        d *= sign;
        int num = stoi(s1.substr(i, abs(d)));
        if (d < 0) total -= num;
        else total += num;
        i += abs(d);
        while (idx < s2.size() && !isdigit(s2[idx]) && s2[idx] != '-') idx++;
    }
    cout << total << endl;
    return 0;
}