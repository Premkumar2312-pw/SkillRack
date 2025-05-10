#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int num = 0;
    string word;
    
    for (char c : s) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
        } else if (isalpha(c)) {
            word += c;
        } else {
            if (num > 0) {
                for (int i = 0; i < num; ++i) {
                    cout << word << " ";
                }
                num = 0;
            }
            word.clear();
        }
    }
    if (num > 0) {
        for (int i = 0; i < num; ++i) {
            cout << word << " ";
        }
    }
    return 0;
}