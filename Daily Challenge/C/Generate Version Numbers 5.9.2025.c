#include <stdio.h>

int main() {
    char ch1, ch2;
    int X, Y;
    scanf(" %c %c", &ch1, &ch2);
    scanf("%d %d", &X, &Y);

    for (char a = ch1; a <= ch2; a++) {
        for (int n = X; n <= Y; n++) {
            for (char b = ch1; b <= ch2; b++) {
                for (int m = X; m <= Y; m++) {
                    printf("%c%d.%c.%d\n", a, n, b, m);
                }
            }
        }
    }
    return 0;
}