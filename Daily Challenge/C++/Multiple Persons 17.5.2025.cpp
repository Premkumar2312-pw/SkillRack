#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> c;
    string s;

    for (int i = 0; i < n; i++) {
        cin >> s;
        c[s]++;
        if (c[s] == 1)
            cout << s << endl;
        else
            cout << s << c[s] << endl;
    }

    return 0;
}