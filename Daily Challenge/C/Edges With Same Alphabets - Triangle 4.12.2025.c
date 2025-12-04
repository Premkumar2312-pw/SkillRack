#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int s = n - 2, b = 1;

    // First line
    for(int i = 0; i < n - 1; i++) printf("*");
    printf("a\n");

    // Middle lines
    for(int i = 1; i < n - 1; i++) {
        for(int j = 0; j < s; j++) printf("*");
        printf("c");
        for(int j = 0; j < b; j++) printf("*");
        printf("a\n");
        s--;
        b += 2;
    }

    // Last line
    printf("c");
    for(int i = 0; i < n - 1; i++) printf(" ");

    return 0;
}