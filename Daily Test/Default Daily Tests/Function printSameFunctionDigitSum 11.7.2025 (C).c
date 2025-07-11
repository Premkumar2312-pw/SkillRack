#include <stdio.h>

void printSamePositionDigitsSum(int num1, int num2)
{
    int res[20], i = 0;
    while (num1 > 0 || num2 > 0) {
        int d1 = num1 % 10;
        int d2 = num2 % 10;
        res[i++] = d1 + d2;
        num1 /= 10;
        num2 /= 10;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", res[j]);
}