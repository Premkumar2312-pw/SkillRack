#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int base_from_str(const string &s) {
    char max_digit = '0';
    for (char ch : s)
        if (ch > max_digit) max_digit = ch;
    return (max_digit - '0') + 1;
}

int main() {
    int n; cin >> n;
    vector<string> nums(n);
    vector<int> d(20, 0);
    vector<int> used(20, 0);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        int base = base_from_str(nums[i]);
        d[base] += stoi(nums[i], nullptr, base);
        used[base] = 1;
    }
    for (int i = 2; i < 20; ++i)
        if (used[i]) cout << d[i] << " ";
    cout << endl;
}