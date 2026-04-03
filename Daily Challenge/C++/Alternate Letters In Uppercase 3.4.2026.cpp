#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int idx = 0;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            cout << " ";
            idx = 0;
        } else {
            if(idx % 2 == 0)
                cout << (char)toupper(str[i]);
            else
                cout << (char)tolower(str[i]);
            idx++;
        }
    }
}