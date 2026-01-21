#include <bits/stdc++.h>
using namespace std;

int get_num(const string &w) {
    string num;
    for (char c : w) if (isdigit(c)) num += c;
    return stoi(num);
}

int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<string> words;
    string w;
    while (ss >> w) words.push_back(w);

    sort(words.begin(), words.end(), [](const string &a, const string &b){
        return get_num(a) < get_num(b);
    });

    for (auto &word : words) cout << word << " ";
    cout << "\n";
}