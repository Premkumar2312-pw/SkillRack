#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    string L[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string s;
    cin >> s;
    int i = 0, len = s.length();
    while (i < len) {
        if (isdigit(s[i])) {
            cout << s[i];
            i++;
        } else {
            string p = "";
            while (i < len && isalpha(s[i])) {
                p += s[i++];
            }
            for (int j = 0; j < 10; j++) {
                if (p == L[j]) {
                    cout << j;
                    break;
                }
            }
        }
    }
    return 0;
}