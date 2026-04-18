#include <iostream>
using namespace std;

int main() {
    string str;
    int n;

    cin >> str;   // single word
    cin >> n;

    int cnt = 0;

    for(int i = 0; i < str.length(); i++) {
        cout << str[i];
        cnt++;

        if(cnt == n) {
            cout << endl;
            cnt = 0;
        }
    }
}