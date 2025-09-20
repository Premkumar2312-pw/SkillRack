#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; char ch; int n;
    cin >> s >> ch >> n;
    string a = s.substr(n - 1);
    string b = s.substr(0, n - 1);
    if (a.size() < b.size()) a = string(b.size() - a.size(), '*') + a;
    else if (b.size() < a.size()) b = string(a.size() - b.size(), '*') + b;
    if (toupper(ch) == 'U') cout << a << "\n" << b;
    else cout << b << "\n" << a;
}