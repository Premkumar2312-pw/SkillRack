#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    int val[N];
    for (int i = 0; i < N; i++) cin >> val[i];

    long long tot = 0;
    for (int i = 0; i < N; i++) {
        int num = val[i], l = 0;
        while ((num & 1) == 0) {
            l++;
            num >>= 1;
        }
        tot += (long long)pow(2, l);
    }
    cout << tot << endl;
    return 0;
}