#include <iostream>
#include <bitset>
using namespace std;

string toBinary(int n) {
    string b = bitset<32>(n).to_string();
    return b.substr(b.find('1'));
}

int main() {
    int x, n, val, c = 0;
    cin >> x >> n;
    string xb = toBinary(x);
    while(n--) {
        cin >> val;
        string vb = toBinary(val);
        if (xb.size() >= vb.size() && xb.substr(xb.size() - vb.size()) == vb)
            c++;
    }
    cout << c << endl;
    return 0;
}