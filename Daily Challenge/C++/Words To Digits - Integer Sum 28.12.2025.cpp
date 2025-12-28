#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> l1 = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string line;
    getline(cin >> ws, line);
    stringstream ss(line);
    string word;
    while(ss >> word) {
        string c = "";
        bool found = false;
        for(size_t j = 0; j < word.length() && !found; j++) {
            if(isalpha(word[j])) {
                string d = "";
                for(size_t k = j; k < word.length(); k++) {
                    if(isalpha(word[k])) {
                        d += word[k];
                        break;
                    }
                }
                for(int h = 0; h < 10; h++) {
                    if(l1[h].substr(0, d.length()) == d) {
                        c = to_string(h);
                        found = true;
                        break;
                    }
                }
            } else if(isdigit(word[j])) {
                c = word[j];
                found = true;
            }
        }
        cout << stoi(c) << endl;
    }
    return 0;
}