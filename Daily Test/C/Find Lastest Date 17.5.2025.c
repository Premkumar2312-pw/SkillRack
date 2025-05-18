#include <stdio.h>
#include <string.h>
#include <limits.h>

// Map month names to numbers
int monthToNumber(char *month) {
    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for (int i = 0; i < 12; i++) {
        if (strcmp(month, months[i]) == 0)
            return i + 1;
    }
    return -1;
}

int main() {
    int m, n, y;
    scanf("%d", &m);
    int d[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &d[i]);
    }

    scanf("%d", &n);
    char mo[n][10];
    for (int i = 0; i < n; i++) {
        scanf("%s", mo[i]);
    }

    scanf("%d", &y);
    int yr[y];
    for (int i = 0; i < y; i++) {
        scanf("%d", &yr[i]);
    }

    int maxY = INT_MIN, maxM = -1, maxD = -1;

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < n; j++) {
            int month = monthToNumber(mo[j]);
            if (month == -1) continue;
            for (int k = 0; k < m; k++) {
                int day = d[k];
                if (day >= 1 && day <= 31) {
                    if (yr[i] > maxY || (yr[i] == maxY && month > maxM) || 
                       (yr[i] == maxY && month == maxM && day > maxD)) {
                        maxY = yr[i];
                        maxM = month;
                        maxD = day;
                    }
                }
            }
        }
    }

    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    printf("%02d-%s-%d\n", maxD, months[maxM - 1], maxY);
    return 0;
}