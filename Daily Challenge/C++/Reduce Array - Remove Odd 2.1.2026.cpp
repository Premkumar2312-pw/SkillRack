#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> l(n);
    for (int i = 0; i < n; i++)
        cin >> l[i];

    while (true) {
        for (int &x : l)
            x /= 2;

        for (int x : l)
            cout << x << " ";
        cout << endl;

        for (int i = 0; i < l.size(); ) {
            if (l[i] % 2 == 1)
                l.erase(l.begin() + i);
            else
                i++;
        }

        if (l.empty())
            break;
    }
    return 0;
}