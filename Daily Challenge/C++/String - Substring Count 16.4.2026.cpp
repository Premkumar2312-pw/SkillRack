#include <iostream>
using namespace std;

int main() {
    string s, e;
    cin >> s >> e;

    int cnt = 0;

    for(int i = 0; i < s.length(); i++) {
        for(int j = i; j < s.length(); j++) {
            if(s.substr(i, j - i + 1) == e)
                cnt++;
        }
    }

    cout << cnt;
}