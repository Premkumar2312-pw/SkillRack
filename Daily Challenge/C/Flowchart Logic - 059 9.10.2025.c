#include <stdio.h>
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    while(num1 > 0) {
        num2 = num2 * 10 + (num1 % 10);
        num1 /= 10;
    }
    int sum1 = num2;
    while(num2 > 0) {
        num1 = num1 * 10 + (num2 % 10);
        num2 /= 10;
    }
    sum1 += num1;
    printf("%d
", sum1);
    return 0;
}