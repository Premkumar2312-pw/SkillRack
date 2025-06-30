#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    string s, p, q;
    cin >> s;

    int a = s.find('['), b = s.find(']');
    p = s.substr(0, a);
    q = s.substr(b + 1);
    string mid = s.substr(a + 1, b - a - 1);

    vector<string> options;
    stringstream ss(mid);
    string token;
    while (getline(ss, token, '|')) {
        options.push_back(p + token + q);
    }

    sort(options.begin(), options.end());

    for (string &x : options)
        cout << x << " ";

    return 0;
}