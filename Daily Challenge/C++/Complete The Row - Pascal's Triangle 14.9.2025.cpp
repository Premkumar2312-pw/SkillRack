#include <bits/stdc++.h>
using namespace std;

vector<long long> generate_row(int r) {
    vector<long long> row(r + 1);
    row[0] = 1;
    for (int k = 1; k <= r; k++)
        row[k] = row[k - 1] * (r - k + 1) / k;
    return row;
}

int main() {
    int n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    for (int r = n - 1; r < 50; r++) {
        auto row = generate_row(r);
        int i = 0;
        for (auto val : row)
            if (i < n && val == nums[i]) i++;
        if (i == n) {
            for (int j = 0; j <= r; j++)
                cout << row[j] << (j == r ? '\n' : ' ');
            break;
        }
    }
    return 0;
}