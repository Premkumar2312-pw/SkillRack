#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> l;
    string s;
    while (getline(cin, s)) {
        if (s.empty()) break;
        l.push_back(s);
    }
    vector<string> l2;
    if (l[0].length() == l.back().length()) {
        for (auto& str : l)
            l2.push_back(str);
        for (int i = l[0].length() - 1; i > 0; --i) {
            for (int k = 0; k < l.size() - 1; ++k)
                cout << "* ";
            cout << l.back()[i] << endl;
        }
        for (int i = l.size() - 1; i >= 0; --i)
            cout << l2[i] << " ";
        cout << endl;
    } else {
        for (auto& str : l)
            l2.push_back(str);
        for (auto& str : l2)
            cout << str << " ";
        cout << endl;
        for (int i = 1; i < l.back().length(); ++i) {
            for (int k = 0; k < l.size() - 1; ++k)
                cout << "* ";
            cout << l.back()[i] << endl;
        }
    }
    return 0;
}