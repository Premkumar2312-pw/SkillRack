#include <stdio.h>

void formatTime(int h, int m, int s) {
    if (h == 0) h = 12;
    else if (h > 12) h -= 12;
    printf("%02d:%02d:%02d\n", h, m, s);
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
    scanf("%d %d", &k, &x);
    
    addTime(h, m, s, x);        // Clock C1
    addTime(h, m, s, x / k);    // Clock C2
    return 0;
}