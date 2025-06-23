#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_digit_col(char arr[][50], int r) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; arr[i][j]; j++) {
            if (!isdigit(arr[i][j])) return 0;
        }
    }
    return 1;
}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    char mat[50][50][50];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%s", mat[i][j]);

    char result[1000] = "";
    for (int j = 0; j < c; j++) {
        char col[50][50];
        for (int i = 0; i < r; i++)
            strcpy(col[i], mat[i][j]);

        if (is_digit_col(col, r)) {
            int sum = 0;
            for (int i = 0; i < r; i++)
                sum += atoi(col[i]);
            char tmp[20];
            sprintf(tmp, "%d ", sum);
            strcat(result, tmp);
        }
    }

    for (int j = 0; j < c; j++) {
        char col[50][50];
        for (int i = 0; i < r; i++)
            strcpy(col[i], mat[i][j]);

        if (!is_digit_col(col, r)) {
            for (int i = r - 1; i >= 0; i--)
                strcat(result, col[i]);
            strcat(result, " ");
        }
    }

    printf("%s\n", result);
    return 0;
}