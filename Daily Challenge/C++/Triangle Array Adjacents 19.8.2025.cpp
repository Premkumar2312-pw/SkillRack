#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, triangle = 0;
    cin >> N;
    vector<int> val(N);
    for(int i = 0; i < N; i++) cin >> val[i];
    for(int i = 0; i < N - 2; i++) {
        int a = val[i], b = val[i+1], c = val[i+2];
        if(a + b > c && a + c > b && b + c > a) triangle++;
    }
    cout << triangle;
    return 0;
}