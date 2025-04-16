#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {
    int n, x, c = 0;
    cin >> n >> x;
    string b = bitset<20>(n).to_string();

    // Remove leading zeros
    b = b.substr(b.find('1'));

    for (int i = 1; i <= b.length(); i++) {
        string p = b.substr(0, i);
        int d = stoi(p, 0, 2);
        if (d % x == 0)
            c++;
    }
    cout << c << endl;
    return 0;
}