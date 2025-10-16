#include <iostream>
#include <iomanip>
#include <vector>
#include <cstring>
using namespace std;
int main() {
    int R, C;
    cin >> R >> C;
    vector<vector<string>> mat(R, vector<string>(C));
    for (int i = 0; i < R; ++i)
        for (int j = 0; j < C; ++j) {
            int v;
            cin >> v;
            mat[i][j]=to_string(v);
        }
    for (int i = 0; i < R; i += 3) {
        for (int j = 0; j < C; j += 3) {
            if (i+3 <= R && j+3 <= C) {
                for (int k = i+1; k < i+4; ++k)
                    for (int l = j+1; l < j+4; ++l)
                        if (((k%3)==1 && ((l%3)==1||(l%3)==0)) || ((k%3)==0 && ((l%3)==1||(l%3)==0)) || ((k%3)==2 && (l%3)==2)) {
                            for (int x=0;x<mat[k-1][l-1].size();x++) mat[k-1][l-1][x]='*';
                        }
            }
        }
    }
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}