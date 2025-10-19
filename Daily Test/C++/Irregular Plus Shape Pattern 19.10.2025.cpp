#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c, d;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    getline(cin, d);
    int w = 1;
    for(int i = 1; i < a.length() + c.length(); i++) {
        if(i < a.length()) {
            for(int j = 1; j < b.length() + d.length(); j++) {
                if(j == d.length())
                    cout << a[a.length()-i];
                else
                    cout << '*';
            }
            cout << endl;
        }
        if(i == a.length()) {
            for(int k = d.length()-1; k >= 0; k--) cout << d[k];
            for(int k = 1; k < b.length(); k++) cout << b[k];
            cout << endl;
        }
        if(i > a.length()) {
            for(int j = 1; j < b.length() + d.length(); j++) {
                if(j == d.length())
                    cout << c[w];
                else
                    cout << '*';
            }
            w++;
            cout << endl;
        }
    }
    return 0;
}