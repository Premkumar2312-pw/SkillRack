#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    bool eq = true, asc = true;

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 1; i < n; i++) {
        if(a[i] != a[0]) eq = false;
        if(a[i] < a[i-1]) asc = false;
    }

    if(eq)
        cout << "Equal";
    else if(asc)
        cout << "Ascending";
    else
        cout << "Descending";

    return 0;
}