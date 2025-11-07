#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int r, c, k;
    cin >> r >> c;
    vector<vector<string>> mat(r, vector<string>(c));
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> mat[i][j];
    cin >> k;

    if(k > 0) {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++)
                for(int t = 0; t < k; t++)
                    cout << mat[i][j] << " ";
            cout << endl;
        }
    } else {
        int reps = stoi(to_string(k).substr(1));
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < reps; j++) {
                for(int q = 0; q < c; q++)
                    cout << mat[i][q] << (q == c-1 ? "
" : " ");
            }
        }
    }
}