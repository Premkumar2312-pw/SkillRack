#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int n = s1.length();
    int h = 0;
    for (int i = 0; i < n; i++) {
        int d1 = s1[i] - '0';
        int d2 = s2[i] - '0';
        int d3 = s3[i] - '0';
        h = max(h, d1 + d2 + d3);
    }
    for (int r = 1; r <= h; r++) {
        string l = "";
        for (int i = 0; i < n; i++) {
            int d1 = s1[i] - '0';
            int d2 = s2[i] - '0';
            int d3 = s3[i] - '0';
            if (r <= d1)
                l += '*';
            else if (r <= d1 + d2)
                l += '-';
            else
                l += '*';
        }
        cout << l << endl;
    }
    return 0;
}