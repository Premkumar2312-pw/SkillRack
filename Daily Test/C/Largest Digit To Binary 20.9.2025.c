#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char str[100];
    int mat[100][100];
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        for (int j = 0; str[j]; j++) mat[i][j] = str[j] - '0';
    }
    int g = 0;
    for (int i = 0; i < n; i++) {
        int max = mat[i][0], idx = 0;
        for (int j = 1; j < n; j++)
            if (mat[i][j] > max) { max = mat[i][j]; idx = j; }
        int bin = 0, base = 1;
        while (max) { bin += (max % 2) * base; base *= 10; max /= 2; }
        mat[i][idx] = bin;
        int val = 0;
        for (int j = 0; j < n; j++) val = val * 10 + mat[i][j];
        g += val;
    }
    printf("%d\n", g);
    return 0;
}