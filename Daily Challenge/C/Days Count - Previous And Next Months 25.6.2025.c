#include <stdio.h>
#include <string.h>

int getDays(int month, int year) {
    if (month == 2) {
        return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

char* getMonthName(int m) {
    char* names[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    return names[m];
}

int getMonthNum(char *mmm) {
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for (int i = 0; i < 12; i++)
        if (strcasecmp(mmm, months[i]) == 0) return i + 1;
    return -1;
}

int main() {
    char date[20], mmm[4];
    int d, y;
    scanf("%d-%3s-%d", &d, mmm, &y);

    int m = getMonthNum(mmm);

    int pm = (m == 1) ? 12 : m - 1;
    int py = (m == 1) ? y - 1 : y;
    int nm = (m == 12) ? 1 : m + 1;
    int ny = (m == 12) ? y + 1 : y;

    int pd = getDays(pm, py);
    int nd = getDays(nm, ny);

    printf("%s %d - %d days\n", getMonthName(pm), py, pd);
    printf("%s %d - %d days\n", getMonthName(nm), ny, nd);
    return 0;
}