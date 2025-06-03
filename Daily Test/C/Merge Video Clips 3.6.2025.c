#include <stdio.h>

void format(int s) {
    int h = s / 3600;
    int m = (s % 3600) / 60;
    s = s % 60;
    printf("%02d:%02d:%02d\n", h, m, s);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n], x, y, t = 0, c = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d:%d", &x, &y);
        a[i] = x * 60 + y;
        t += a[i];
    }

    printf("Total Duration: ");
    format(t);

    for(int i = 0; i < n - 1; i++) {
        c += a[i];
        format(c);
    }
    return 0;
}