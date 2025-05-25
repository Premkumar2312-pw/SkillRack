#include <stdio.h>
int main() {
    int matrix[9][9], i, j;
    char N[10];
    for(i = 0; i < 9; i++)
        for(j = 0; j < 9; j++)
            scanf("%d", &matrix[i][j]);
    scanf("%s", N);
    int result = 0;
    for(j = 0; j < 9; j++) {
        int digits = N[j] - '0';
        int num = 0;
        for(i = 0; i < digits; i++)
            num = num * 10 + matrix[i][j];
        result += num;
    }
    printf("%d\n", result);
    return 0;
}