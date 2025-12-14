#include <stdio.h>

int main() {
    int a, b, c, d;
    int n;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    scanf("%d", &n);

    int mat[100][100];          // assume n ≤ 100
    int s = 0, e = n - 1, count = 0;

    while (1) {
        int j = 0, k = 0;
        for (int i = s; i < e; i++) {
            mat[s][i] = a + j;
            mat[i][e] = b + j;
            j++;
        }
        for (int i = e; i > s; i--) {
            mat[i][s] = d + k;
            mat[e][i] = c + k;
            k++;
        }

        count++;
        s++;
        e--;

        if (n / 2 == count)
            break;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", mat[i][j]);
            if (j != n - 1) printf(" ");
        }
        printf("
");
    }
    return 0;
}