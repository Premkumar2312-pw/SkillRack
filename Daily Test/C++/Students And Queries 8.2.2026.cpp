#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> roll(n), A(n), B(n), C(n);
    for (int i = 0; i < n; i++)
        cin >> roll[i] >> A[i] >> B[i] >> C[i];

    int q;
    cin >> q;

    while (q--) {
        char ch, s, o;
        int v;
        cin >> ch >> s >> o >> v;

        bool found = false;
        for (int i = 0; i < n; i++) {
            int mark = (s == 'A') ? A[i] : (s == 'B') ? B[i] : C[i];

            bool ok = (o == '<' && mark < v) ||
                      (o == '>' && mark > v) ||
                      (o == '=' && mark == v);

            if (ok) {
                found = true;
                if (ch == '*')
                    cout << roll[i] << " " << A[i] << " " << B[i] << " " << C[i] << "\n";
                else if (ch == 'A') cout << A[i] << "\n";
                else if (ch == 'B') cout << B[i] << "\n";
                else if (ch == 'C') cout << C[i] << "\n";
            }
        }
        if (!found) cout << "-1\n";
    }
}