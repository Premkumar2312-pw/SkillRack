#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N;
    cin >> N;
    vector<string> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    for (char ch : S) {
        bool found = false;
        for (auto &str : a) {
            int mid = str.size() / 2;
            if (tolower(str[mid]) == tolower(ch)) {
                cout << str << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            if (!a.empty()) {
                int mid = a[0].size() / 2;
                for (int i = 0; i < mid; i++) cout << '*';
                cout << ch;
                for (int i = mid + 1; i < (int)a[0].size(); i++) cout << '*';
                cout << "\n";
            } else {
                cout << ch << "\n";
            }
        }
    }
    return 0;
}