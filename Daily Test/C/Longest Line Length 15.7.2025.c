#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x[500], y[500], max = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d %d", &x[i], &y[i]);
    for (int i = -10; i <= 10; i++) {
        int min = 1000, maxx = -1000, count = 0;
        for (int j = 0; j < n; j++) {
            if (y[j] == i) {
                if (x[j] < min) min = x[j];
                if (x[j] > maxx) maxx = x[j];
                count++;
            }
        }
        if (count >= 2 && maxx - min > max) max = maxx - min;
    }
    printf("%d", max);
    return 0;
}