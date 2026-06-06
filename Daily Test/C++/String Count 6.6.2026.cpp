#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, row;
    int r, c, cnt = 0;

    cin >> s >> r >> c;

    for(int i = 0; i < r; i++) {
        row = "";
        for(int j = 0; j < c; j++) {
            char ch;
            cin >> ch;
            row += ch;
        }

        size_t pos = row.find(s);
        while(pos != string::npos) {
            cnt++;
            pos = row.find(s, pos + 1);
        }
    }

    cout << cnt;
}