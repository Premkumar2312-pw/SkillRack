#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int R, C, K;
    cin >> R >> C;
    vector<vector<string>> a(R, vector<string>(C));
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> a[i][j];
    cin >> K;
    for (int i = 0; i < R; i += K) {
        for (int j = 0; j < C; j += K) {
            string s = "";
            for (int x = i; x < i + K; x++)
                for (int y = j; y < j + K; y++)
                    s += a[x][y];
            cout << stoi(s, 0, 2) << " ";
        }
        cout << endl;
    }
    return 0;
}