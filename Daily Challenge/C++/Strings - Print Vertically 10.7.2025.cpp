#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int p1 = s1.find(s2[0]);
    int p2 = s1.find(s3[0]);

    if (p1 == p2) {
        s1[p1] = '#';
        p2 = s1.find(s3[0]);
    }

    cout << s1 << endl;
    int c = 1, d = 1, x = max(s2.length(), s3.length());

    for (int i = 1; i < x; i++) {
        for (int j = 0; j < s1.length(); j++) {
            if (j == p1 && c < s2.length()) cout << s2[c++];
            else if (j == p2 && d < s3.length()) cout << s3[d++];
            else cout << "*";
        }
        cout << endl;
    }
    return 0;
}