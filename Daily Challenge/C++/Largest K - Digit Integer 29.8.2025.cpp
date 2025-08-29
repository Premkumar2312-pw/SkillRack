#include <iostream>
using namespace std;

int main() {
    string n; int k;
    cin >> n >> k;
    if (n.size() < k) {
        cout << -1 << "\n";
        return 0;
    }
    int max = -1;
    for (int i = 0; i <= (int)n.size() - k; i++) {
        int val = stoi(n.substr(i,k));
        if (val > max) max = val;
    }
    cout << max << "\n";
    return 0;
}
