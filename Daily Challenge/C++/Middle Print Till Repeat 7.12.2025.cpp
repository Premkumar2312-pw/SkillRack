#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int mid = n / 2;
    
    string result = "";
    result += s[mid];
    unordered_set<char> visited = {s[mid]};
    
    int offset = 1;
    while (true) {
        if (mid - offset < 0 || mid + offset >= n) break;
        
        char left_char = s[mid - offset];
        result += left_char;
        if (visited.count(left_char)) break;
        visited.insert(left_char);
        
        char right_char = s[mid + offset];
        result += right_char;
        if (visited.count(right_char)) break;
        visited.insert(right_char);
        
        offset++;
    }
    
    cout << result << endl;
    return 0;
}