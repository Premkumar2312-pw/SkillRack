#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int w[26];
    w[0]=0; w[1]=1;
    for(int i=2; i<26; i++) w[i] = w[i-2]+w[i-1];
    int sum=0;
    for(char c : s) {
        c = tolower(c);
        sum += w[c-'a'];
    }
    cout << sum << "\n";
    return 0;
}
