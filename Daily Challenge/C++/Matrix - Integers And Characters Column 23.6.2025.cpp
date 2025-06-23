#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

bool isDigitCol(const vector<string>& col) {
    for (const string& val : col) {
        for (char ch : val)
            if (!isdigit(ch)) return false;
    }
    return true;
}

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<string>> mat(r, vector<string>(c));

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> mat[i][j];

    vector<string> nums, chars;
    for (int j = 0; j < c; ++j) {
        vector<string> col;
        for (int i = 0; i < r; ++i)
            col.push_back(mat[i][j]);

        if (isDigitCol(col)) {
            int sum = 0;
            for (const string& val : col) sum += stoi(val);
            nums.push_back(to_string(sum));
        } else {
            string s;
            for (int i = r - 1; i >= 0; --i)
                s += mat[i][j];
            chars.push_back(s);
        }
    }

    for (const string& s : nums) cout << s << " ";
    for (const string& s : chars) cout << s << " ";
    cout << endl;
}