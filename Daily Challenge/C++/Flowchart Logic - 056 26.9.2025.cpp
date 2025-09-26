#include <iostream>
using namespace std;
int main() {
    int M, N, ctr = 1;
    cin >> M >> N;
    while (M > 0 || N > 0) {
        if (ctr % 2 != 0) {
            cout << (N % 10);
            N /= 10;
        } else {
            cout << (M % 10);
            M /= 10;
        }
        ctr++;
    }
    return 0;
}