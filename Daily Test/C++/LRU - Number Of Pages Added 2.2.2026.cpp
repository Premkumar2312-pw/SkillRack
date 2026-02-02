#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> pages(N);
    for(int &x : pages) cin >> x;

    int S, R, X;
    cin >> S >> R >> X;

    list<int> cache;
    int c = S, p = 0;

    for(int i = 0; i < N; i++) {
        auto it = find(cache.begin(), cache.end(), pages[i]);

        if(it != cache.end()) {
            cache.erase(it);
        } else {
            p++;
            if(cache.size() >= c)
                cache.pop_front();
        }
        cache.push_back(pages[i]);

        if(i + 1 == R)
            c += X;
    }

    cout << p;
    return 0;
}