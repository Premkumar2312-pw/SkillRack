#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int R, C, T;
    cin >> R >> C;
    vector<vector<string>> m(R, vector<string>(C));
    
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> m[i][j];
    
    cin >> T;

    while (T--) {
        int a_count = 0, o_count = 0;
        for (int j = 0; j < C; j++) {
            if (m[R-1][j] == "A") a_count++;
            else if (m[R-1][j] == "O") o_count++;
        }

        string remove_char = (a_count >= o_count) ? "A" : "O";

        for (int j = 0; j < C; j++)
            if (m[R-1][j] == remove_char)
                m[R-1][j] = "*";

        for (int j = 0; j < C; j++) {
            vector<string> col;
            int stars = 0;
            for (int i = 0; i < R; i++) {
                if (m[i][j] == "*") stars++;
                else col.push_back(m[i][j]);
            }
            for (int i = 0; i < stars; i++) m[i][j] = "*";
            for (int i = 0; i < col.size(); i++) m[i+stars][j] = col[i];
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }

    return 0;
}