#include <iostream>
using namespace std;

int main() {
    int N1, N2, N3;
    if (!(cin >> N1 >> N2 >> N3)) return 0;
    int ctr = N2;
    while (ctr >= N1 || ctr <= N3) {
        if (ctr == 1) {
            cout << ctr << " ";
        } else {
            cout << 1 << " ";
        }

        if (ctr <= N3) {
            cout << N2 << " ";
        } else {
            cout << N3 << " ";
        }
        cout << "
";
        ctr = 1;
        ctr++;
        if (ctr > N3) break;
    }
    return 0;
}