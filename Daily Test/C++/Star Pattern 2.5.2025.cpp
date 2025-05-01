#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 2, underscore = 0;
    for (int i = 0; i < n; i++) {
        int l = k;
        for (int j = 0; j < k; j++) {
            for (int u = 0; u < underscore; u++) {
                cout << "-";
            }
            for (int s = 0; s < l; s++) {
                cout << "* ";
            }
            cout << endl;
            l--;
            underscore++;
        }
        k++;
    }
    return 0;
}