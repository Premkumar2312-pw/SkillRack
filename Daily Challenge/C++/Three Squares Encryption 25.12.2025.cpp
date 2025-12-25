#include <bits/stdc++.h>
using namespace std;

void ab(char a, char b[3][3], int c) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a == b[i][j]) {
                cout << c << (i + 1) << (j + 1);
            }
        }
    }
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    char m1[3][3], m2[3][3], m3[3][3];
    int k = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            m1[i][j] = s2[k++];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            m2[i][j] = s2[k++];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            m3[i][j] = s2[k++];

    for (char ch : s1) {
        ab(ch, m1, 1);
        ab(ch, m2, 2);
        ab(ch, m3, 3);
    }

    return 0;
}