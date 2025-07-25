#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    string s, digits;
    cin >> s;
    for (char c : s)
        if (isdigit(c)) digits += c;

    set<int> res;
    sort(digits.begin(), digits.end());

    for (int l = 1; l <= 3; l++) {
        string temp = digits;
        do {
            string part = temp.substr(0, l);
            if (part[0] != '0') {
                int num = stoi(part);
                if (isPrime(num)) res.insert(num);
            }
        } while (next_permutation(temp.begin(), temp.end()));
    }

    for (int n : res)
        cout << n << " ";
}