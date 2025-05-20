#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i)
        cin >> s[i];

    int l = s[0].length() / 4;

    for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < 4; ++j) {
            string part1 = s[i].substr(j * l, l);
            string part2 = s[i+1].substr(j * l, l);
            cout << part1 + part2 << endl;
        }
    }
    return 0;
}