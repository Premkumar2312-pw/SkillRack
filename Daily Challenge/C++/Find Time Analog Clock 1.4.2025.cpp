#include <iostream>
#include <string>
using namespace std;

int main() {
    string mat[5][5];
    
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> mat[i][j];

    int n1, n2;
    cin >> n1 >> n2;

    string Clock[5][5] = {
        {"", "11", "12", "1", ""},
        {"10", "", "", "", "2"},
        {"9", "", "", "", "3"},
        {"8", "", "", "", "4"},
        {"", "7", "6", "5", "8"}
    };

    int row = 0, col = 0, flag = 0;
    
    // Find n1
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (!mat[i][j].empty() && stoi(mat[i][j]) == n1) {
                row = i, col = j, flag = 1;
                break;
            }
        }
        if (flag) break;
    }

    int hour = stoi(Clock[row][col]);
    if (hour >= 24) cout << "00:";
    else if (hour < 10) cout << "0" << hour << ":";
    else cout << hour << ":";

    row = col = flag = 0;
    
    // Find n2
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (!mat[i][j].empty() && stoi(mat[i][j]) == n2) {
                row = i, col = j, flag = 1;
                break;
            }
        }
        if (flag) break;
    }

    int minute = stoi(Clock[row][col]) * 5;
    if (minute >= 60) cout << "00\n";
    else if (minute < 10) cout << "05\n";
    else cout << minute << endl;

    return 0;
}