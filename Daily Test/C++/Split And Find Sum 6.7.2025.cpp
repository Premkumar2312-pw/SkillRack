#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int sum = 0, i = 0;
    while (i < s.size()) {
        string temp = "";
        char cur = s[i];
        while (i < s.size() && s[i] == cur) {
            temp += s[i++];
        }
        sum += stoi(temp);
    }
    cout << sum << endl;
    return 0;
}