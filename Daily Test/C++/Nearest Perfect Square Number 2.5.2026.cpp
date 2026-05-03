#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int root = (int)sqrt(n);
    int lower = root * root;
    int upper = (root + 1) * (root + 1);

    if (n - lower <= upper - n)
        cout << lower;
    else
        cout << upper;

    return 0;
}
