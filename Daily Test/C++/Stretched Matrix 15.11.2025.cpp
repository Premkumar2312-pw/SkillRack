#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<vector<string>> mat1(n, vector<string>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> mat1[i][j];
    cin >> x;
    vector<vector<string>> mat2(x, vector<string>(x));
    for (int i = 0; i < x; ++i)
        for (int j = 0; j < x; ++j)
            cin >> mat2[i][j];
    int a = x / n;
    for (int i = 0; i < x; i += a) {
        for (int j = 0; j < x; j += a) {
            for (int k = i; k < i + a; ++k) {
                for (int l = j; l < j + a; ++l) {
                    if (mat1[i / a][j / a] != mat2[k][l]) {
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}