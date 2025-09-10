#include <iostream>
#include <string>
using namespace std;

string d[] = {
    "111110", "011000", "1101101", "1111001", "0110011",
    "1011011", "1011111", "1110000", "1111111", "1111011"
};

int main() {
    string N, res = "";
    cin >> N;
    for (char c : N)
        res += d[c-'0'];
    int num = 0;
    for (char c : res)
        num = num * 2 + (c - '0');
    cout << num << endl;
    return 0;
}
