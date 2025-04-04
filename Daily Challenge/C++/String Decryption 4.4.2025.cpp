#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

struct Pair {
    int pos;
    string ch;
};

bool cmp(const Pair &a, const Pair &b) {
    return a.pos < b.pos;
}

int main() {
    string s, tok;
    getline(cin, s);
    vector<Pair> v;
    stringstream ss(s);
    
    while (getline(ss, tok, '-')) {
        string num = "", ch = "";
        for (char c : tok) isdigit(c) ? num += c : ch += c;
        v.push_back({stoi(num), ch});
    }
    
    sort(v.begin(), v.end(), cmp);
    for (auto &p : v) cout << p.ch;
}