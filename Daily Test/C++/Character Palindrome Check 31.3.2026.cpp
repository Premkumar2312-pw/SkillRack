#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char,int> freq;
    for(char c : s)
        freq[c]++;

    int odd = 0;
    for(auto x : freq)
        if(x.second % 2 != 0)
            odd++;

    cout << (odd <= 1 ? "yes" : "no");
}