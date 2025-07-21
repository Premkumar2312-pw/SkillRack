#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    int len = n.length();
    bool first = true;

    for (int i = 0; i < len; i++) {
        if (n[i] != '0') {
            if (!first) cout << "+";
            cout << n[i];
            for (int j = i + 1; j < len; j++) cout << "0";
            first = false;
        }
    }
    return 0;
}
