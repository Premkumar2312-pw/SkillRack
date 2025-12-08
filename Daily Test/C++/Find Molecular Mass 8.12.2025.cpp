#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    map<string,int> mass = {
        {"H",1},{"He",4},{"C",12},{"N",14},{"O",16},
        {"Mg",24},{"S",32},{"Ca",40},{"Cu",63}
    };

    int i = 0, total = 0;

    while (i < s.length()) {
        string sym = "";
        sym += s[i++];
        
        if (i < s.length() && islower(s[i])) {
            sym += s[i++];
        }

        int cnt = 0;
        while (i < s.length() && isdigit(s[i])) {
            cnt = cnt * 10 + (s[i] - '0');
            i++;
        }
        if (cnt == 0) cnt = 1;

        total += mass[sym] * cnt;
    }

    cout << total;
}