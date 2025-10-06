#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if (s1 == s2) { cout << "NO
"; return 0; }
    int n = s1.size();
    bool even = true, odd = true;
    for (int i = 0; i < n; i += 2) if (s1[i] != s2[i]) even = false;
    for (int i = 1; i < n; i += 2) if (s1[i] != s2[i]) odd = false;
    if (even || odd) cout << "YES
";
    else cout << "NO
";
}