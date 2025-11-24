#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> l[i];
        sum += l[i];
    }
    int d = 1;
    while (true) {
        d *= 2;
        if(sum <= d) {
            cout << d << endl;
            break;
        }
    }
    return 0;
}