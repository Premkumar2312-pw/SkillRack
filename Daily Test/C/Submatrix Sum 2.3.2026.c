#include <stdio.h>

int main() {
    int S, r, c;
    scanf("%d %d %d", &S, &r, &c);

    int m[r][c];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);

    for(int top = 0; top < r; top++) {
        for(int left = 0; left < c; left++) {
            for(int bottom = top; bottom < r; bottom++) {
                for(int right = left; right < c; right++) {

                    int sum = 0;

                    for(int i = top; i <= bottom; i++)
                        for(int j = left; j <= right; j++)
                            sum += m[i][j];

                    if(sum == S) {
                        for(int i = top; i <= bottom; i++) {
                            for(int j = left; j <= right; j++)
                                printf("%d ", m[i][j]);
                            printf("\n");
                        }
                        printf("END\n");
                    }
                }
            }
        }
    }

    return 0;
}