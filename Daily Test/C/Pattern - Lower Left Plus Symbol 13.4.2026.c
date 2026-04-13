#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);

    int num = m;

    for(int i = 1; i <= m; i++) {

        // print '+'
        for(int j = 1; j < i; j++) {
            printf("+ ");
        }

        // print numbers
        for(int j = 1; j <= num; j++) {
            printf("%d ", num);
        }

        printf("\n");
        num--;
    }

    return 0;
}