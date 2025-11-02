#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    vector<int> l1(n), l(n), b(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> l1[i];
        l[i] = l1[i];
    }
    cin >> k;

    int i = 0;

    while (i < k) {
        for (int j = 0; j < n; j++) {
            if (i == k) break;

            if (b[j] == 0 && i < k) {
                l[j] -= 1;
                if (l[j] == 0) b[j] = 1;
            }
            else if (b[j] == 1 && i < k) {
                l[j] += 1;
                if (l[j] == l1[j]) b[j] = 0;
            }

            for (int x = 0; x < n; x++) cout << l[x] << " ";
            cout << "
";
            i++;
        }
    }

    return 0;
}