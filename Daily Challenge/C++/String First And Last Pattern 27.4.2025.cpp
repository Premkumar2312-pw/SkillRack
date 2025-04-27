#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int l = s.length();
    
    for (int i = 1; i <= l; i++) {
        for (int j = i - 1; j >= 0; j--) {
            cout << s[j];
        }
        for (int j = l - i; j < l; j++) {
            cout << s[j];
        }
        cout << endl;
    }
    
    return 0;
}
