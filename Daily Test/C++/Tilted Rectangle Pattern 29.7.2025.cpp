#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            cout << string(n - 1 - i, '-') << string(n, '*');
        } else if(i == n - 1) {
            cout << string(n, '*');
        } else {
            cout << string(n - 1 - i, '-') << "*" << string(n - 2, '-') << "*";
        }
        cout << endl;
    }
    return 0;
}