#include <iostream>
#include <string>
using namespace std;
bool contains(char ch, const string &row) {
    return row.find(ch) != string::npos;
}
int main() {
    string a, b, c, s;
    cin >> a >> b >> c >> s;
    int ml[3] = {0}, cr = -1, count = 0;
    for(char ch : s) {
        bool found = false;
        for(int i = 0; i < 3; i++) {
            string row = i == 0 ? a : (i == 1 ? b : c);
            if(contains(ch, row)) {
                count = (cr == i) ? count + 1 : 1;
                cr = i;
                ml[i] = max(ml[i], count);
                found = true;
                break;
            }
        }
        if(!found) {
            cr = -1;
            count = 0;
        }
    }
    int m = max({ml[0], ml[1], ml[2]});
    if(m < 2) cout << "-1\n";
    else {
        if(ml[0] == m) cout << a << endl;
        if(ml[1] == m) cout << b << endl;
        if(ml[2] == m) cout << c << endl;
    }
    return 0;
}