#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    cout << "#" << endl;

    int tri = 1;
    for (int j = 2; j < N - 1; j++) tri += 2;

    int start = 1, copy = tri, b = 1, end = N, st = start;
    vector<string> a;

    while (start < end - 1) {
        for (int i = st; i < N - 1; i++) {
            string s;
            if (start % 2 == 1) {
                if (start == 1) {
                    s = string(b, '*') + "#" + string(tri, '*') + "#";
                    a.push_back(s);
                    tri -= 2; b++;
                } else {
                    s = string(tri, '*') + "#";
                    a[i - 1] += s;
                    tri -= 2;
                }
            } else {
                s = string(tri, '*') + "#";
                a[i - 1] += s;
                tri += 2;
            }
        }
        if (start % 2 == 1) { tri = 1; st++; }
        else { tri = copy - 2; N--; }
        start++; copy -= 2;
    }

    for (auto &row : a) cout << row << endl;
    cout << string(b, '*') << "#" << endl;
    return 0;
}