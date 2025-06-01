#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s2.length(); i++) {
        int times = s2[i] - '0';
        string prefix = s1.substr(0, i + 1);
        for (int t = 0; t < times; t++) {
            cout << prefix;
        }
        cout << endl;
    }
    return 0;
}