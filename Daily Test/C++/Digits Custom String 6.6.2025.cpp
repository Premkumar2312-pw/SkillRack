#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    unordered_map<char, int> p;
    for (int i = 0; i < 10; i++) p[b[i]] = i;
    sort(a.begin(), a.end(), [&](char x, char y) {
        return p[x] < p[y];
    });
    cout << a;
    return 0;
}