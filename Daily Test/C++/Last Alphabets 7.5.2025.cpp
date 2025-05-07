#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    stringstream ss(input);
    string word;
    map<char, vector<string>> d;
    vector<char> order;

    while (ss >> word) {
        char k = word.back();
        if (d.find(k) == d.end()) {
            order.push_back(k);
        }
        d[k].push_back(word);
    }

    sort(order.begin(), order.end());

    for (char k : order) {
        for (string w : d[k]) {
            cout << w << " ";
        }
        cout << endl;
    }

    return 0;
}