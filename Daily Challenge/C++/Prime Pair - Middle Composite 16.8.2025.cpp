#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int limit = n + 100;
    vector<int> p(limit + 1, 1);
    p[0] = p[1] = 0;
    
    for (int i = 2; i * i <= limit; i++)
        if (p[i])
            for (int j = i * i; j <= limit; j += i)
                p[j] = 0;

    vector<int> primes;
    for (int i = 2; i <= limit; i++) if (p[i]) primes.push_back(i);

    for (int i = 0; i + 1 < (int)primes.size(); i++) {
        if (primes[i] + primes[i+1] == 2 * n) {
            cout << primes[i] << " " << primes[i+1];
            return 0;
        }
    }
    cout << -1;
}