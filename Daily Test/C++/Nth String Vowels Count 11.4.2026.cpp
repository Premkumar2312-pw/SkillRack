#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string s, res;
    int maxV = 0;

    while(n--) {
        getline(cin, s);
        int count = 0;

        for(char c : s) {
            c = tolower(c);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                count++;
        }

        if(count > maxV) {
            maxV = count;
            res = s;
        }
    }

    cout << res;
}