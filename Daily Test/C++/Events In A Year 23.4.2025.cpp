#include <iostream>
#include <iomanip>
using namespace std;

bool isLeap(int y) {
    return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
}

int daysInMonth(int m, int y) {
    int days[] = {31, (isLeap(y) ? 29 : 28), 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};
    return days[m - 1];
}

void printDate(int dayOfYear, int y) {
    string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                       "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int m = 1;
    while (dayOfYear > daysInMonth(m, y)) {
        dayOfYear -= daysInMonth(m, y);
        m++;
    }
    cout << setw(2) << setfill('0') << dayOfYear << '-' << months[m - 1]
         << '-' << setw(4) << setfill('0') << y << '\n';
}

int main() {
    int x, y;
    cin >> x >> y;
    int limit = isLeap(y) ? 366 : 365;

    for (int d = x; d <= limit; d += x) {
        printDate(d, y);
    }
    return 0;
}