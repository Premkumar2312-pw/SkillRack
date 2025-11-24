#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, f = 0;
    cin >> n;
    vector<string> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) b[i] = a[n-1-i];
    if(a[0] == "*") f = 1;

    for(int i = 0; i < n; i++) {
        if(a[i] == "*") {
            if(b[i] != "*") a[i] = b[i];
            else a[i] = "1";
        } else if(f == 1 && a[i] == "*") { // Will never run since above handles all "*"
            a[i] = "1";
        }
    }
    bool is_pal = true;
    for(int i = 0; i < n; i++)
        if(a[i] != a[n-1-i]) is_pal = false;
    if(is_pal)
        for(string x : a) cout << x << " ";
    else
        cout << "-1";
    return 0;
}