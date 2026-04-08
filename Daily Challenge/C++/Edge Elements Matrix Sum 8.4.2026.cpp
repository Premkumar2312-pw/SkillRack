#include <iostream>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    int mat[100][100]; // maximum R, C = 100
    int sum = 0;

    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            cin >> mat[i][j];

    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            if(i == 0 || i == R-1 || j == 0 || j == C-1)
                sum += mat[i][j];

    cout << sum << endl;
    return 0;
}