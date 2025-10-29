#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int>(n));

    // Read the matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];

    // Modify the matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (!(m[i][j] > 0 && m[j][i] > 0))
                m[i][j] = 0;

    // Print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
    return 0;
}