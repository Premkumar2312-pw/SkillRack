#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    cin.ignore();
    string s, word, cur = "";
    getline(cin, s);
    istringstream iss(s);
    vector<string> lines;

    while (iss >> word) {
        if (cur.length() + word.length() + (cur.empty() ? 0 : 1) <= y)
            cur += (cur.empty() ? "" : " ") + word;
        else {
            lines.push_back(cur);
            cur = word;
        }
    }
    if (!cur.empty()) lines.push_back(cur);

    int sc = max(0, (int)lines.size() - x);
    cout << sc << endl;
}