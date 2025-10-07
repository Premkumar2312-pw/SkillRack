#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2, result;
    cin >> s1 >> s2;
    int i = 0, j = 0;
    while (i < s1.size() || j < s2.size()) {
        if (i < s1.size() && j < s2.size() && s1[i] == s2[j]) {
            char ch = s1[i];
            while (i < s1.size() && s1[i] == ch) result += s1[i++];
            while (j < s2.size() && s2[j] == ch) result += s2[j++];
        } else {
            if (i < s1.size()) result += s1[i++];
            else if (j < s2.size()) result += s2[j++];
        }
    }
    cout << result << endl;
    return 0;
}