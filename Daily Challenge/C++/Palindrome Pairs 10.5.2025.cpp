#include <iostream>
#include <vector>
using namespace std;


bool isPalindrome(string s) {
    int len = s.size();
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1])
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                string combined = words[i] + words[j];
                if (isPalindrome(combined)) {
                    cout << combined << endl;
                    return 0;
                }
            }
        }
    }
    cout << "-1\n";
    return 0;
}