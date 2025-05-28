#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);

    for (int i = 1; i < n; i++) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        int nr = x + (g < b ? g : b);
        int ng = y + (r < b ? r : b);
        int nb = z + (r < g ? r : g);
        r = nr; g = ng; b = nb;
    }

    int res = r < g ? (r < b ? r : b) : (g < b ? g : b);
    printf("%d\n", res);
    return 0;
}