#include <stdio.h>
#include <stdlib.h>

int validateDate(char *dateStr) {
    int day, month, year;

    if (sscanf(dateStr, "%d-%d-%d", &day, &month, &year) != 3) {
        return 0;
    }

    if (month < 1 || month > 12) return 0;
    if (year < 1) return 0;
    if (day < 1) return 0;
    
    int daysInMonth;

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    if (day > daysInMonth) {
        return 0;
    }

    return 1;
}

int main() {
    char dateStr[11];
    scanf("%s", dateStr);
    printf("%d", validateDate(dateStr));
    return 0;
}