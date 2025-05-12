#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> words;
    string word;
    while (getline(cin, word) && !word.empty()) {
        words.push_back(word);
    }

    if (words.size() == 1 && words[0].find(' ') != string::npos) {
        vector<string> list;
        size_t pos = 0;
        while ((pos = words[0].find(' ')) != string::npos) {
            list.push_back(words[0].substr(0, pos));
            words[0].erase(0, pos + 1);
        }
        list.push_back(words[0]);
        for (auto it = list.rbegin(); it != list.rend(); ++it) {
            cout << *it << endl;
        }
    } else {
        for (auto it = words.rbegin(); it != words.rend(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }

    cout << words.size() << endl;
    return 0;
}