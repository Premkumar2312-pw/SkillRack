#include <stdio.h>

int main() {
    int arr[1000], n = 0, ch;
    while ((ch = getchar()) != EOF) {
        if (ch >= '0' && ch <= '9') {
            ungetc(ch, stdin);
            scanf("%d", &arr[n++]);
        }
    }
    if (n == 0) return 0;
    if (arr[0] != '\n' && getchar() == '\n') {
        for (int i = n - 1; i >= 0; i--)
            printf("%d\n", arr[i]);
    } else {
        for (int i = n - 1; i >= 0; i--) {
            printf("%d", arr[i]);
            if (i > 0) printf(" ");
        }
        printf("\n");
    }
    return 0;
}