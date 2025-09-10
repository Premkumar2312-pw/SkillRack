#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];
    
    string q = "";
    for (int i = 9; i >= 0; i--) q += to_string(i);
    
    long long cnt = 0;
    for (string s : arr) {
        string val = "";
        for (char j : q) {
            if (s.find(j) != string::npos) continue;
            val += j;
        }
        cnt += stoll(val);
    }
    cout << cnt << endl;
}