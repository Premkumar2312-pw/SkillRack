#include <bits/stdc++.h>
using namespace std;

void fact(int n) {
    vector<int> big;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << i << " ";
            if (i != n / i) big.push_back(n / i);
        }
    }
    reverse(big.begin(), big.end());
    for (int v : big) cout << v << " ";
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<string> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];

    for (int i = 0; i < N; i += K) {
        if (i + K <= N) {
            string s;
            for (int j = i; j < i + K; j++)
                s += arr[j].back();
            int a = stoi(s);
            if (a == 0) cout << "0\n";
            else { fact(a); cout << "\n"; }
        }
    }
    return 0;
}