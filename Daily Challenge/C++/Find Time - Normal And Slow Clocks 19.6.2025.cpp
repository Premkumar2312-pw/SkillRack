#include <iostream>
#include <iomanip>
using namespace std;

void formatTime(int h, int m, int s) {
    if (h == 0) h = 12;
    else if (h > 12) h -= 12;
    cout << setfill('0') << setw(2) << h << ":"
         << setw(2) << m << ":"
         << setw(2) << s << endl;
}

void addTime(int h, int m, int s, int extra) {
    int total = h * 3600 + m * 60 + s + extra;
    total %= 86400;
    h = total / 3600;
    m = (total % 3600) / 60;
    s = total % 60;
    formatTime(h, m, s);
}

int main() {
    int h, m, s, k, x;
    scanf("%d:%d:%d", &h, &m, &s);
    cin >> k >> x;

    addTime(h, m, s, x);        // Clock C1
    addTime(h, m, s, x / k);    // Clock C2
    return 0;
}