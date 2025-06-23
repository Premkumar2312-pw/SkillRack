#include <stdio.h>

int main() {
    int r, c, q;
    scanf("%d %d", &r, &c);
    scanf("%d", &q);

    int row[51] = {0}, col[51] = {0};
    int rowCount = 0, colCount = 0;

    while (q--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        if (!row[x]) {
            row[x] = 1;
            rowCount++;
        }
        if (!col[y]) {
            col[y] = 1;
            colCount++;
        }

        int filled = rowCount * c + colCount * r - rowCount * colCount;
        printf("%d\n", r * c - filled);
    }

    return 0;
}