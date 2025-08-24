#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr.begin(), arr.end(), [](string &a, string &b) {
        int n1 = stoi(a.substr(0,2));
        int n2 = stoi(b.substr(0,2));
        if(n1 != n2) return n1 > n2; // descending
        string s1 = a.substr(2,2), s2 = b.substr(2,2);
        if(s1 != s2) return s1 < s2;
        return stoi(a.substr(4)) < stoi(b.substr(4));
    });
    for(auto &s: arr) cout << s << "\n";
}