#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<string>> key(5, vector<string>(5));
    string s, res = "";

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            cin >> key[i][j];

    cin >> s;

    for(int i = 0; i < s.length() - 1; i += 2) {
        char ch1 = s[i], ch2 = s[i + 1];
        int row1, col1, row2, col2;

        for(int r = 0; r < 5; r++) {
            for(int c = 0; c < 5; c++) {
                if(key[r][c].find(ch1) != string::npos) {
                    row1 = r; col1 = c;
                }
                if(key[r][c].find(ch2) != string::npos) {
                    row2 = r; col2 = c;
                }
            }
        }

        if(row1 == row2 && col1 != col2) {
            col1 = (col1 + 1) % 5;
            col2 = (col2 + 1) % 5;
        } else if(col1 == col2 && row1 != row2) {
            row1 = (row1 + 1) % 5;
            row2 = (row2 + 1) % 5;
        } else if(row1 != row2 && col1 != col2) {
            swap(col1, col2);
        }

        res += key[row1][col1][0];
        res += key[row2][col2][0];
    }

    cout << res;
    return 0;
}