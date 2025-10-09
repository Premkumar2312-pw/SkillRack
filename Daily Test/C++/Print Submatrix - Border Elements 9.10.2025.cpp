#include <iostream>
#include <vector>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    vector<vector<int>> val(R, vector<int>(C));
    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            cin >> val[i][j];
    int X, Y;
    cin >> X >> Y;

    int a = R - X + 1, b = C - Y + 1;
    int top = X - 1, bottom = X - 1 + a - 1;
    int left = Y - 1, right = Y - 1 + b - 1;

    vector<int> border;
    for(int i = left; i <= right; i++) border.push_back(val[top][i]);
    for(int i = top + 1; i <= bottom; i++) border.push_back(val[i][right]);
    for(int i = right - 1; i >= left; i--) border.push_back(val[bottom][i]);
    for(int i = bottom - 1; i > top; i--) border.push_back(val[i][left]);

    for(int i = 0; i < border.size(); i++) cout << border[i] << " ";
    cout << endl;
}