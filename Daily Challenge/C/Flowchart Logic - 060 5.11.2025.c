#include <stdio.h>

int main() {
    int N, D1, D2;
    scanf("%d %d %d", &N, &D1, &D2);
    int flag = 1;
    while (N > 0) {
        int digit = N % 10;
        if (digit < D1 || digit > D2) {
            printf("NO
");
            flag = 0;
            break;
        }
        N /= 10;
    }
    if (flag)
        printf("YES
");
    return 0;
}