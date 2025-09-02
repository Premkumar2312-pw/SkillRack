#include <iostream>
using namespace std;

int main() {
    int N, C, D, copy;
    cin >> N >> C >> D;
    copy = C;

    for (int i = 1; i <= D; i++) {
        for (int j = 1; j <= N; j++) {
            cout << C + j << " ";
        }
        cout << endl;
        C = copy + i;
    }
    return 0;
}