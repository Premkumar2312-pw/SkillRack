#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> m[i][j];

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(m[i][j] && m[j][i]) {
                if(m[i][j] > m[j][i]) m[i][j] = 0;
                else m[j][i] = 0;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cout << m[i][j] << " ";
        cout << "\n";
    }
    return 0;
}