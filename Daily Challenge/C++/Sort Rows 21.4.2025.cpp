#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

struct Row {
    char ch;
    int index;
    string data;
};

int main() {
    int r, c;
    cin >> r >> c;
    cin.ignore();
    vector<Row> rows;

    for (int i = 0; i < r; ++i) {
        string line, word;
        getline(cin, line);
        istringstream iss(line);
        char ch = 0;
        while (iss >> word) {
            if (isalpha(word[0])) {
                ch = word[0];
                break;
            }
        }
        rows.push_back({ch, i, line});
    }

    sort(rows.begin(), rows.end(), [](Row &a, Row &b) {
        if (a.ch != b.ch) return a.ch < b.ch;
        return a.index > b.index;
    });

    for (auto &row : rows) {
        cout << row.data << '\n';
    }

    return 0;
}