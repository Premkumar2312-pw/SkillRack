#include <iostream>
#include <iomanip>
using namespace std;

void format(int s) {
    int h = s / 3600;
    int m = (s % 3600) / 60;
    s = s % 60;
    cout << setfill('0') << setw(2) << h << ":"
         << setw(2) << m << ":" << setw(2) << s << endl;
}

int main() {
    int n;
    cin >> n;
    int a[n], x, y, t = 0, c = 0;

    for(int i = 0; i < n; i++) {
        char ch;
        cin >> x >> ch >> y;
        a[i] = x * 60 + y;
        t += a[i];
    }

    cout << "Total Duration: ";
    format(t);

    for(int i = 0; i < n - 1; i++) {
        c += a[i];
        format(c);
    }

    return 0;
}