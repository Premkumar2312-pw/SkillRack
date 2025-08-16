#include <stdio.h>
#include <string.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    char a[20][20][5];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%s", a[i][j]);

    for (int i0 = 0; i0 < r; i0 += 3) {
        for (int j0 = 0; j0 < c; j0 += 3) {
            int seen[10] = {0}, holes[9][2], h = 0;
            for (int i = i0; i < i0 + 3; i++) {
                for (int j = j0; j < j0 + 3; j++) {
                    if (a[i][j][0] == '-')
                        holes[h][0] = i, holes[h++][1] = j;
                    else
                        seen[atoi(a[i][j])] = 1;
                }
            }
            int k = 0;
            for (int num = 1; num <= 9; num++) {
                if (!seen[num]) {
                    sprintf(a[holes[k][0]][holes[k][1]], "%d", num);
                    k++;
                }
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%s ", a[i][j]);
        printf("\n");
    }
    return 0;
}