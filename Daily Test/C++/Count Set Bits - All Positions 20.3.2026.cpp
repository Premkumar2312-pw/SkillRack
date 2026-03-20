#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<string> b;
    int le = 0;

    for(int x : arr) {
        string s = "";
        while(x > 0) {
            s = char((x % 2) + '0') + s;
            x /= 2;
        }
        if(s == "") s = "0";

        le = max(le, (int)s.size());
        b.push_back(s);
    }

    int lsb = -1;

    while(le >= -lsb) {
        int ans = 0;

        for(int i = 0; i < n; i++) {
            if((int)b[i].size() >= -lsb) {
                if(b[i][b[i].size() + lsb] == '1') {
                    ans++;
                }
            }
        }

        lsb--;
        cout << ans << " ";
    }

    return 0;
}