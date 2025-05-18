#include <stdio.h>

void rotate(char *ts, int x) {
    int hh, mm;
    sscanf(ts, "%d:%d", &hh, &mm);
    hh = (hh - x) % 12;
    if (hh <= 0) {
        hh += 12;
    }
    mm = (mm - (x * 5)) % 60;
    if (mm < 0) {
        mm += 60;
    }
    printf("%02d:%02d\n", hh, mm);
}

int main() {
    char ts[6];
    int x;
    scanf("%s %d", ts, &x);
    rotate(ts, x);
    return 0;
}