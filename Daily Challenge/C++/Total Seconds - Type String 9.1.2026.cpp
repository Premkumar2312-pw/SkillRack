#include <bits/stdc++.h>
using namespace std;

int main() {
    string K, S;
    cin >> K >> S;

    int pos[26];
    for (int i = 0; i < 26; i++)
        pos[K[i] - 'a'] = i;

    int time = 0;
    for (int i = 1; i < S.length(); i++) {
        time += abs(pos[S[i] - 'a'] - pos[S[i - 1] - 'a']);
    }

    cout << time;
    return 0;
}