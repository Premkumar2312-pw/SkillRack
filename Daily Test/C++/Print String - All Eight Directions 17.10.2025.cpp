#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int size = 2 * n - 1;
    vector<vector<char>> m(size, vector<char>(size, '*'));
    int mid = n - 1;

    for (int i = 0; i < n; i++) {
        m[mid - i][mid - i] = s[i];
        m[mid - i][mid] = s[i];
        m[mid - i][mid + i] = s[i];
        m[mid][mid - i] = s[i];
        m[mid][mid + i] = s[i];
        m[mid + i][mid - i] = s[i];
        m[mid + i][mid] = s[i];
        m[mid + i][mid + i] = s[i];
    }

    for (auto& row : m) {
        for (int j = 0; j < size; j++) {
            cout << row[j];
            if (j < size - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}