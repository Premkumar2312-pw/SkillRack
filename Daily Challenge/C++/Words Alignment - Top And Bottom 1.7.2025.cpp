#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<string> words;
    string w;
    int maxLen = 0;

    while (ss >> w) {
        words.push_back(w);
        if (w.length() > maxLen) maxLen = w.length();
    }

    vector<string> padded;
    for (int i = 0; i < words.size(); i++) {
        int pad = maxLen - words[i].length();
        if ((i + 1) % 2 == 1) {
            padded.push_back(words[i] + string(pad, '*'));
        } else {
            padded.push_back(string(pad, '*') + words[i]);
        }
    }

    for (int row = 0; row < maxLen; row++) {
        for (int col = 0; col < padded.size(); col++) {
            cout << padded[col][row];
        }
        cout << endl;
    }

    return 0;
}