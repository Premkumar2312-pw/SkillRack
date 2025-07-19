#include <iostream>
using namespace std;
int main() {
    string b[8][8];
    int x, y, c = 0;
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++) {
            cin >> b[i][j];
            if(b[i][j] == "H") x = i, y = j;
        }
    int m[8][2] = {{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1}};
    for(int i = 0; i < 8; i++) {
        int nx = x + m[i][0], ny = y + m[i][1];
        if(nx >= 0 && nx < 8 && ny >= 0 && ny < 8) c++;
    }
    cout << c;
    return 0;
}