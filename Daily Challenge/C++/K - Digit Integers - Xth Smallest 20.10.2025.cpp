#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, k, x;
    cin >> N;
    vector<int> c;
    vector<string> arr(N);
    for (int i = 0; i < N; ++i) cin >> arr[i];
    cin >> k >> x;
    for (int i = 0; i < N; ++i) {
        int num = stoi(arr[i]);
        int len = arr[i].length();
        if ((num < 0 && len - 1 == k) || (num > 0 && len == k))
            c.push_back(num);
    }
    sort(c.begin(), c.end());
    if ((int)c.size() < x)
        cout << -1 << endl;
    else
        cout << c[x-1] << endl;
    return 0;
}