#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    vector<int> l(n), l1;
    for (int i = 0; i < n; ++i) cin >> l[i];
    int I = 0;
    while (I < q) {
        int j = 0;
        while (j < n && I < q) {
            j++;
            l1.push_back(j);
            I++;
        }
        int k = n - 1;
        while (k > 1 && I < q) {
            l1.push_back(k);
            k--;
            I++;
        }
    }
    for (int i = 1; i <= n; ++i) {
        int d = 0;
        for (int j = 0; j < l1.size(); ++j)
            if (i == l1[j]) d += l[j];
        cout << d << " ";
    }
    return 0;
}