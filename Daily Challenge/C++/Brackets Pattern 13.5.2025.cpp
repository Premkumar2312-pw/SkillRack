#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    char o = s[0];
    int n = stoi(s.substr(1));
    
    char c;
    if (o == '(') c = ')';
    else if (o == '[') c = ']';
    else if (o == '{') c = '}';
    else if (o == '<') c = '>';
    
    for (int i = 1; i <= n; i++) {
        for (int j = i; j > 0; j--) {
            for (int k = 0; k < j; k++) cout << o;
            for (int k = 0; k < j; k++) cout << c;
        }
        cout << endl;
    }

    return 0;
}