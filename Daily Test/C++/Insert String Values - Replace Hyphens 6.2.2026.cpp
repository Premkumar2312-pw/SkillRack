#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N;

    string S(X, '-');

    while (N--) {
        string str;
        int P;
        cin >> str >> P;
        P--;

        int L = str.size();
        if (P + L <= X) {
            bool ok = true;
            for (int i = 0; i < L; i++) {
                if (S[P + i] != '-') {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                for (int i = 0; i < L; i++)
                    S[P + i] = str[i];
            }
        }
    }

    cout << S;
    return 0;
}