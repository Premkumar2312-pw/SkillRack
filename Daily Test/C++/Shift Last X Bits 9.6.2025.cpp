#include <iostream>
#include <bitset>
using namespace std;

int main() {
    unsigned int n;
    int x;
    cin >> n >> x;

    bitset<32> b(n);
    string s = b.to_string();
    string last = s.substr(32 - x);
    string rotated = last.back() + last.substr(0, x - 1);
    s.replace(32 - x, x, rotated);
    
    bitset<32> result(s);
    cout << result.to_ulong();
    return 0;
}