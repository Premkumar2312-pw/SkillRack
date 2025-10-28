#include <iostream>
#include <vector>
#include <sstream>
#include <cctype>
using namespace std;

int main() {
    string n, p;
    getline(cin, n);
    vector<int> l;
    int i = 0;
    while (i < n.length()) {
        if (n[i] == '[') {
            vector<int> l1;
            ++i;
            while (n[i] != ']' && i < n.length()) {
                if (isdigit(n[i])) p += n[i];
                else if (n[i] == ' ') {
                    if (!p.empty()) {
                        l1.push_back(stoi(p));
                        p.clear();
                    }
                }
                ++i;
            }
            if (!p.empty()) {
                l1.push_back(stoi(p));
                p.clear();
            }
            for (auto it = l1.rbegin(); it != l1.rend(); ++it) {
                l.push_back(*it);
            }
        } else if (isdigit(n[i])) p += n[i];
        else if (n[i] == ' ') {
            if (!p.empty()) {
                l.push_back(stoi(p));
                p.clear();
            }
        }
        ++i;
    }
    if (!p.empty()) {
        l.push_back(stoi(p));
    }
    int sum = 0;
    for (int x : l) {
        cout << x << " ";
        sum += x;
    }
    cout << "
" << sum << endl;
}