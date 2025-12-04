#include <bits/stdc++.h>
using namespace std;

string toBinary(int n) {
    string s = "";
    while(n > 0) {
        s += char('0' + (n % 2));
        n /= 2;
    }
    return s; // reversed binary
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    bool found = false;

    for(int i = 0; i < n - 1; i++) {
        string bi = toBinary(arr[i]);

        for(int j = i + 1; j < n; j++) {
            string bj = toBinary(arr[j]);
            string rj = bj;
            reverse(rj.begin(), rj.end());

            if(bi == rj) {
                cout << arr[i] << " " << arr[j] << "\n";
                found = true;
            }
        }
    }

    if(!found) cout << -1;

    return 0;
}