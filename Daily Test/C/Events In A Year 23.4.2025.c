#include <stdio.h>
#include <time.h>

int isLeap(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int daysInMonth(int month, int year) {
    int days[] = {31, (isLeap(year) ? 29 : 28), 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};
    return days[month - 1];
}

void printDate(int dayOfYear, int year) {
    int month = 1, day = dayOfYear;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    while (day > daysInMonth(month, year)) {
        day -= daysInMonth(month, year);
        month++;
    }
    printf("%02d-%s-%04d\n", day, months[month - 1], year);
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int limit = isLeap(y) ? 366 : 365;

    for (int d = x; d <= limit; d += x) {
        printDate(d, y);
    }
    return 0;
}