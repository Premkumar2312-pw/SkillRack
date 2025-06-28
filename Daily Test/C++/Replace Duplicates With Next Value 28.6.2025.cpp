#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string s, r = "";
    cin >> s;
    unordered_set<char> u;

    for (char c : s) {
        char l = tolower(c);
        if (u.find(l) == u.end()) {
            r += c;
            u.insert(l);
        } else if (isalpha(c)) {
            int x = l;
            while (u.count((char)(x = 97 + (x - 96) % 26)));
            u.insert((char)x);
            r += islower(c) ? (char)x : toupper(x);
        } else {
            int x = c - '0';
            while (u.count((char)((x = (x + 1) % 10) + '0')));
            u.insert((char)(x + '0'));
            r += (char)(x + '0');
        }
    }
    cout << r;
}