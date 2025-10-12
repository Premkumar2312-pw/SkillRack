#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();
    string val;
    getline(cin, val);
    vector<int> ans;
    stringstream ss(val);
    string token;
    while (ss >> token) {
        string s = "";
        string sign = "";
        int found = 0;
        for (size_t j = 0; j + 1 < token.size(); ++j) {
            if (token[j] == token[j+1] && !isdigit(token[j])) {
                sign += token[j];
                found = 1;
                break;
            } else {
                s += token[j];
            }
        }
        if (sign.empty())
            ans.push_back(stoi(token));
        else if (sign == "+")
            ans.push_back(stoi(s) + 1);
        else
            ans.push_back(stoi(s) - 1);
    }
    int res = 0;
    for (int x : ans) res += x;
    cout << res << endl;
    return 0;
}