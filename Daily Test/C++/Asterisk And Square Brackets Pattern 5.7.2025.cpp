#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int h = 2 * (n - i);
        for (int j = 0; j < h; j++) cout << "-";
        for (int j = 0; j < i; j++) cout << "[";
        for (int j = 0; j < 2 * i - 1; j++) cout << "*";
        for (int j = 0; j < i; j++) cout << "]";
        for (int j = 0; j < h; j++) cout << "-";
        cout << "\n";
    }
}