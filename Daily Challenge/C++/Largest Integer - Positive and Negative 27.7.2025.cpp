#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    int n, x, m = -1;
    cin >> n;
    unordered_set<int> s;
    while (n--) {
        cin >> x;
        s.insert(x);
    }
    for (int i : s)
        if (i > 0 && s.count(-i)) m = max(m, i);
    cout << m;
}