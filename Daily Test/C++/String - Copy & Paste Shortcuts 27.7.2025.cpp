#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string s, w;
    getline(cin, s);
    stringstream ss(s);
    vector<string> r, c;
    while (ss >> w) {
        if (w == "Ctrl+C") c = r;
        else if (w == "Ctrl+V") r.insert(r.end(), c.begin(), c.end());
        else r.push_back(w);
    }
    for (auto &x : r) cout << x << " ";
    return 0;
}