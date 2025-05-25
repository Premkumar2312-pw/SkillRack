#include <iostream>
using namespace std;
int main() {
    int matrix[9][9];
    string N;
    for(int i = 0; i < 9; i++)
        for(int j = 0; j < 9; j++)
            cin >> matrix[i][j];
    cin >> N;
    int result = 0;
    for(int j = 0; j < 9; j++) {
        int digits = N[j] - '0', num = 0;
        for(int i = 0; i < digits; i++)
            num = num * 10 + matrix[i][j];
        result += num;
    }
    cout << result << endl;
    return 0;
}