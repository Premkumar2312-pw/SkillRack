#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void replace_chars(string &str) {
    for (char &ch : str) {
        if (ch == '+') ch = '_';
        else if (ch == '-') ch = '+';
    }
    for (char &ch : str) {
        if (ch == '_') ch = '-';
    }
}

int main() {
    string b, c;
    getline(cin, b);
    getline(cin, c);
    string d = b;
    replace_chars(d);
    cout << d << endl;

    // Simple evaluator for "number x number" type input
    int res = 0, i = 0, xval = stoi(c);
    while (i < d.size()) {
        if (isdigit(d[i])) {
            int coeff = d[i] - '0';
            i++;
            if (d[i] == 'x') {
                res += coeff * xval;
                i++;
            } else {
                res += coeff;
            }
        } else if (d[i] == '+') {
            i++;
        } else if (d[i] == '-') {
            i++;
            if (isdigit(d[i])) {
                int coeff = d[i] - '0';
                i++;
                if (d[i] == 'x') {
                    res -= coeff * xval;
                    i++;
                } else {
                    res -= coeff;
                }
            }
        } else {
            i++;
        }
    }
    cout << res << endl;
    return 0;
}