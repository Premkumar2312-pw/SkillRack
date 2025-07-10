#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n - 1, 0);
    a.push_back(1);
    for(int i = n; i < t; i++) {
        int sum = 0;
        for(int j = i - n; j < i; j++)
            sum += a[j];
        a.push_back(sum);
    }
    for(int i = 0; i < t; i++) cout << a[i] << " ";
}