#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string out;
    int n = s.size();

    for (int i = 0; i < n;) {
        int j = i + 1;
        while (j < n && (isupper(s[i]) ? isupper(s[j]) : islower(s[j]))) {
            j++;
        }
        if (j - i >= 2) {
            for (int k = i; k < j; k++) {
                if (isupper(s[k])) out.push_back(tolower(s[k]));
                else if (islower(s[k])) out.push_back(toupper(s[k]));
                else out.push_back(s[k]);
            }
        } else {
            out.push_back(s[i]);
        }
        i = j;
    }

    cout << out << "\n";
}