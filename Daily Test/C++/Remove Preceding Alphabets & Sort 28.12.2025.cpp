#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> l(n);
    for(int i = 0; i < n; i++) {
        cin >> l[i];
    }
    int len0 = l[0].length();
    for(int i = 0; i < len0; i++) {
        int c = -1;
        string a = "";
        for(int j = 0; j < n; j++) {
            if(l[j][i] != '-') {
                if(c == -1) {
                    a += l[j][i];
                }
                if(j == a.length()) {
                    for(int k = 0; k < len0; k++) {
                        int f = 0;
                        for(int m = 0; m < n; m++) {
                            if(l[m][k] == a[0] && f == 0) {
                                l[m] += a;
                                f = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    sort(l.begin(), l.end(), [](string x, string y){ return x.length() < y.length(); });
    for(auto& s : l) {
        cout << s << endl;
    }
    return 0;
}