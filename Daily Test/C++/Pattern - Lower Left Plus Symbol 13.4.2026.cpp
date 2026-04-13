#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    int num = m;

    for(int i = 1; i <= m; i++) {

        for(int j = 1; j < i; j++) {
            cout << "+ ";
        }

        for(int j = 1; j <= num; j++) {
            cout << num << " ";
        }

        cout << endl;
        num--;
    }
}