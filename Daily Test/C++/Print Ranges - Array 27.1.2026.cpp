#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    bool start = true;

    for(int i = 0; i < n - 1; i++) {
        if(start)
            cout << a[i] << "-";

        if(a[i] == a[i+1] || a[i] == a[i+1] - 1)
            start = false;
        else {
            cout << a[i] << " ";
            start = true;
        }
    }

    if(start)
        cout << a[n-1] << "-" << a[n-1];
    else
        cout << a[n-1];
}