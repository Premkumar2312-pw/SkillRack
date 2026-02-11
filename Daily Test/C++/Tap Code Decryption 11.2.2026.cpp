#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> code;
    string word;

    while (cin >> word) {
        if (cin.peek() == '\n') {
            code.push_back(word);
            break;
        }
        code.push_back(word);
    }

    vector<vector<string>> s(5);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < code.size(); j++) {
            string temp;
            cin >> temp;
            s[i].push_back(temp);
        }
    }

    string out = "";

    for (int i = 0; i < code.size(); i += 2) {
        int r = code[i].length() - 1;
        int c = code[i + 1].length() - 1;

        if (s[r][c].length() > 1)
            out += s[r][c][0];
        else
            out += s[r][c];
    }

    cout << out;
}