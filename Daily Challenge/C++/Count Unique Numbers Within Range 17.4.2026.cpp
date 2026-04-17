#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int freq[1000001] = {0};

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    int cnt = 0;

    for(int i = a; i <= b; i++) {
        if(freq[i] > 0)
            cnt++;
    }

    cout << cnt;
}