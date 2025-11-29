#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;

    string b = "";
    if (n == 0) b = "0";
    else {
        while (n > 0) {
            b.push_back((n & 1) ? '1' : '0');
            n >>= 1;
        }
    }

    string res = "";
    int i = 0;
    bool octa = true;
    int len = b.size();

    while (i < len) {
        int bits = octa ? 3 : 4;
        if (i + bits > len) bits = len - i;
        int val = 0;
        int pow2 = 1;
        for (int k = 0; k < bits; k++) {
            if (b[i + k] == '1') val += pow2;
            pow2 <<= 1;
        }
        char ch;
        if (octa) ch = char('0' + val);
        else {
            if (val < 10) ch = char('0' + val);
            else ch = char('A' + (val - 10));
        }
        res.push_back(ch);
        i += bits;
        octa = !octa;
    }

    reverse(res.begin(), res.end());
    cout << res << "
";
    return 0;
}