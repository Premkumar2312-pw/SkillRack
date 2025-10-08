#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int,int>> l1(n);
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int first = -1, second = -1;
        int f = 0;
        for(char ch : s) {
            if (isdigit(ch)) {
                if (f == 0) { first = ch - '0'; f = 1; }
                else second = ch - '0';
            }
        }
        l1[i] = {first, second};
    }
    int sum = 0;
    for(auto [j, k] : l1) {
        int val = 0;
        if(j < k) for(int i = j; i <= k; i++) val = val*10 + i;
        else for(int i = j; i >= k; i--) val = val*10 + i;
        sum += val;
    }
    cout << sum << endl;
    return 0;
}