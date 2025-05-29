#include <stdio.h>

int toMinutes(char *time) {
    int h, m;
    sscanf(time, "%d:%d", &h, &m);
    return h * 60 + m;
}

void printTime(int mins) {
    printf("%02d:%02d", mins / 60, mins % 60);
}

int main() {
    char s[6], e[6];
    int x, y;
    scanf("%s %s", s, e);
    scanf("%d %d", &x, &y);

    int start = toMinutes(s);
    int end = toMinutes(e), next;

    int printed = 0;
    while ((next = start + x) <= end) {
        printTime(start);
        printf("-");
        printTime(next);
        printf("\n");
        start = next + y;
        printed = 1;
    }

    if (!printed)
        printf("-1\n");
    return 0;
}