#include <iostream>
#include <vector>
using namespace std;
void ab(int a, int b, int c, int d) {
    for (int i = a; i < b; i += c) {
        for (int j = 0; j < d; j++) {
            if (i == j) cout << "* ";
            else cout << "_ ";
        }
        cout << endl;
    }
}
int main() {
    int n, j;
    cin >> n >> j;
    vector<int> m(j);
    for (int i = 0; i < j; ++i) cin >> m[i];
    for (int i = 0; i < j; ++i) {
        if (i == 0)
            ab(0, m[i], 1, n);
        else if (m[i - 1] < m[i])
            ab(m[i - 1] + 1, m[i] + 1, 1, n);
        else if (m[i - 1] > m[i])
            ab(m[i - 1] - 2, m[i] - 2, -1, n);
    }
    return 0;
}
