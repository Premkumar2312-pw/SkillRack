#include <iostream>
#include <vector>
using namespace std;
int main() {
    int R, C;
    cin >> R >> C;
    vector<vector<int>> a(R, vector<int>(C));
    vector<vector<char>> res(R, vector<char>(C, '0'));
    int dir[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
    
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            cin >> a[i][j];

    for(int i=0;i<R;i++) {
        for(int j=0;j<C;j++) {
            if(a[i][j] == 1) {
                res[i][j] = 'C';
                for(int d=0;d<8;d++) {
                    int x = i + dir[d][0];
                    int y = j + dir[d][1];
                    if(x>=0 && x<R && y>=0 && y<C)
                        res[x][y] = 'C';
                }
            }
        }
    }

    for(int i=0;i<R;i++) {
        for(int j=0;j<C;j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
    return 0;
}