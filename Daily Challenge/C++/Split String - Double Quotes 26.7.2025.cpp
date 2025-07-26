#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    bool inQuotes = false;
    string word = "";

    for (char ch : s) {
        if (ch == '"') {
            inQuotes = !inQuotes;
        } else if (ch == ' ' && !inQuotes) {
            if (!word.empty()) {
                cout << word << "\n";
                word = "";
            }
        } else {
            word += ch;
        }
    }

    if (!word.empty()) {
        cout << word << "\n";
    }

    return 0;
}