#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s[n];
    s[0] = 0; s[1] = 1;
    for(int i = 2; i < n; i++)
        s[i] = s[i-1] + 2 * s[i-2] + 3;
    cout << s[n-1] << endl;
    return 0;
}