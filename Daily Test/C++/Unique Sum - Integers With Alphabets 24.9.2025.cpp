#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> l(n);
    for (int i = 0; i < n; ++i)
        cin >> l[i];
    set<string> a;
    for (int i = 0; i < n; ++i) {
        string c, p;
        for (char ch : l[i]) {
            if (isalpha(ch)) c += ch;
            else if (isdigit(ch)) p += ch;
        }
        a.insert(c + p);
    }
    int sum = 0;
    for (auto s : a) {
        sum += stoi(s.substr(1));
    }
    cout << sum << endl;
    return 0;
}