#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int R, C, K;
    cin >> R >> C;
    vector<string> city(R);
    string dummy;
    getline(cin, dummy); // Clean buffer
    for (int i = 0; i < R; ++i) getline(cin, city[i]);
    cin >> K;
    string r = "";
    for (char ch : city[0]) {
        if (ch == '|') r += string(K, '|');
        else r += ch;
    }
    for (int i = 0; i < R; ++i) cout << r << endl;
    return 0;
}