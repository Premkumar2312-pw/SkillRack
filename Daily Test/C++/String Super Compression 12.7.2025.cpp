#include <iostream>
#include <map>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> freq;
    for (int i = 0; i < s.size(); ) {
        char ch = s[i++];
        int num = 0;
        while (isdigit(s[i]))
            num = num * 10 + (s[i++] - '0');
        freq[ch] += num;
    }

    for (auto [c, n] : freq)
        cout << c << n;
}