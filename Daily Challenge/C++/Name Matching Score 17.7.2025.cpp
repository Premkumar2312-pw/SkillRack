#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> v1(s1.length(), 0), v2(s2.length(), 0);
    int sc = 0;

    for (int i = 0; i < min(s1.length(), s2.length()); i++) {
        if (s1[i] == s2[i]) {
            v1[i] = v2[i] = 1;
            sc += 2;
        }
    }

    for (int i = 0; i < s1.length(); i++) {
        for (int j = 0; j < s2.length(); j++) {
            if (s1[i] == s2[j] && !v1[i] && !v2[j]) {
                v1[i] = v2[j] = 1;
                sc += 1;
                break;
            }
        }
    }

    cout << sc << endl;
    return 0;
}