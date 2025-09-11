#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<array<int,4>> a(n);
    for (int i = 0; i < n; i++)
        scanf("%d.%d.%d.%d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);

    sort(a.begin(), a.end());
    for (auto &ip : a)
        printf("%d.%d.%d.%d\n", ip[0], ip[1], ip[2], ip[3]);
}