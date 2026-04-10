#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int n;
    cin >> str >> n;

    int freq[26] = {0};
    bool printed[26] = {0};

    for(char ch : str)
        freq[ch - 'a']++;

    for(char ch : str){
        int idx = ch - 'a';
        if(freq[idx] == n && !printed[idx]){
            cout << ch;
            printed[idx] = true;
        }
    }
}