#include <iostream>
#include <iomanip>
using namespace std;

int toMinutes(string time) {
    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(3, 2));
    return h * 60 + m;
}

void printTime(int mins) {
    cout << setw(2) << setfill('0') << mins / 60 << ":"
         << setw(2) << setfill('0') << mins % 60;
}

int main() {
    string s, e;
    int x, y;
    cin >> s >> e >> x >> y;

    int start = toMinutes(s), end = toMinutes(e);
    bool printed = false;

    while (start + x <= end) {
        printTime(start);
        cout << "-";
        printTime(start + x);
        cout << "\n";
        start += x + y;
        printed = true;
    }

    if (!printed) cout << "-1\n";
    return 0;
}