#include <bits/stdc++.h>
using namespace std;

struct Cell {
    int row, col;
    string val;
};

int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);

    vector<Cell> cells;
    string token;
    while (ss >> token) {
        int r = 0, c = 0;
        string text;
        string num;
        for (char ch : token) {
            if (isdigit(ch)) num += ch;
            else {
                if (!num.empty()) {
                    if (r == 0) r = stoi(num);
                    else c = stoi(num);
                    num.clear();
                }
                text += ch;
            }
        }
        cells.push_back({r, c, text});
    }

    sort(cells.begin(), cells.end(),
         [](const Cell &a, const Cell &b) {
             return (a.row == b.row) ? a.col < b.col : a.row < b.row;
         });

    int currentRow = cells[0].row;
    for (auto &cell : cells) {
        if (cell.row != currentRow) {
            cout << "\n";
            currentRow = cell.row;
        }
        cout << cell.val << " ";
    }
}