#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int total_moves = 0;

    for (int i = 0; i < s1.length(); i++) {
        int d1 = s1[i] - '0';
        int d2 = s2[i] - '0';
        int clockwise = abs(d1 - d2);
        int anticlockwise = 10 - clockwise;
        total_moves += min(clockwise, anticlockwise);
    }

    cout << total_moves << endl;
    return 0;
}