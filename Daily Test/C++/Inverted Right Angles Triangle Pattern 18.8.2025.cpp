#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int cnt = 1 + 4 * (N - 1);

    for (int i = 1; i <= cnt; i++) {
        if (i % 2 == 1) cout << "*";
        else cout << "-";
    }
    cnt -= 4;
    cout << "\n";

    for (int i = 1; i < N; i++) {
        for (int k = 0; k < i * 2; k++) cout << "-";
        for (int j = 1; j <= cnt; j++) {
            if (j == 1 || j == cnt / 2 + 1 || j == cnt) cout << "*";
            else cout << "-";
        }
        cnt -= 4;
        cout << "\n";
    }
}