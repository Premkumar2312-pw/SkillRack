#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    int rows = 0, cols = -1;

    while (getline(cin, line)) {
        stringstream ss(line);
        int x, count = 0;
        while (ss >> x) count++;

        if (cols == -1) {
            cols = count;
            rows = 1;
        } else if (count == cols) {
            rows++;
        } else {
            cout << rows << " " << cols << "\n";
            cols = count;
            rows = 1;
        }
    }
    cout << rows << " " << cols << "\n";
    return 0;
}