#include <iostream>
using namespace std;

int main() {
    int x, count = 0;
    string str;

    cin >> x >> str;

    for(char c : str) {
        if(string("aeiouAEIOU").find(c) != string::npos) {
            cout << c;
            count++;
        }
        if(count == x) break;
    }
}