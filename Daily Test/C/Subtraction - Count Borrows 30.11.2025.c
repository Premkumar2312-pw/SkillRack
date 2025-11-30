#include <stdio.h>
#include <string.h>

int main() {
    char x[1005], y[1005], ypad[1005];
    scanf("%s", x);
    scanf("%s", y);

    int lx = strlen(x), ly = strlen(y);
    int diff = lx - ly;
    for (int i = 0; i < diff; i++) ypad[i] = '0';
    for (int i = 0; i < ly; i++) ypad[diff + i] = y[i];
    ypad[lx] = '';

    int bc = 0, c = 0;

    for (int i = lx - 1; i >= 0; i--) {
        int xd = x[i] - '0';
        int yd = ypad[i] - '0';
        xd -= c;
        c = 0;
        if (xd < yd) {
            bc++;
            c = 1;
            xd += 10;
        }
    }
    printf("%d
", bc);
    return 0;
}