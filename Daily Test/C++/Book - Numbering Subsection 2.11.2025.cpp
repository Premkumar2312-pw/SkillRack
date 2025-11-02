#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    vector<string> l;
    string s;

    // Read input lines till EOF
    while (getline(cin, s)) {
        l.push_back(s);
    }

    int a = 0, b = 0;

    for (auto &i : l) {
        if (i.size() > 1 && i[0] == '-' && i[1] == '-') {
            int num = stoi(i.substr(2));
            for (int j = 1; j <= num; j++) {
                cout << a << "." << b << "." << j << "
";
            }
            b++;
        } else if (i.size() > 0 && i[0] == '-') {
            a++;
            b = 1;
        }
    }
    return 0;
}