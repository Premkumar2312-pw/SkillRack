#include <iostream>
using namespace std;
int main() {
    int x, y, maxVal, res;
    char op = '*';
    cin >> x >> y;
    maxVal = x * y;

    res = x - y;
    if(res > maxVal) { maxVal = res; op = '-'; }

    res = x + y;
    if(res > maxVal) { maxVal = res; op = '+'; }

    if(y != 0) {
        res = x / y;
        if(res > maxVal) { maxVal = res; op = '/'; }
    }

    cout << op << endl;
    return 0;
}