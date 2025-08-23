#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    char mat[r][c];
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf(" %c", &mat[i][j]);
        }
    }
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (r == c) {
                if (i == j) printf("%c ", mat[i][j]);
                else printf("* ");
            } else if (r > c) {
                if (i - j >= 0 && i - j <= r - c)
                    printf("%c ", mat[i][j]);
                else printf("* ");
            } else {
                if (j - i >= 0 && j - i <= c - r)
                    printf("%c ", mat[i][j]);
                else printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}