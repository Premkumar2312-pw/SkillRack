#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);

    stringstream ss1(line1), ss2(line2);
    vector<string> a, b;
    string word;

    while(ss1 >> word) a.push_back(word);
    while(ss2 >> word) b.push_back(word);

    if(a.size() != b.size()) {
        cout << "NO";
        return 0;
    }

    for(int i = 0; i < a.size(); i++) {
        if(a[i].length() != b[i].length()) {
            cout << "NO";
            return 0;
        }

        for(char ch : a[i]) {
            if(b[i].find(ch) != string::npos) {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
}