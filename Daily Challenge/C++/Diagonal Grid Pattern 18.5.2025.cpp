#include <iostream>
using namespace std;

int main() {
    int N, k = 1;
    cin >> N;
    cout << "*\n";

    for (int i = 2; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            for (int x = 0; x < k; x++) cout << "- ";
            for (int y = 0; y < i; y++) cout << "* ";
            cout << endl;
        }
        k += i;
    }
    return 0;
}