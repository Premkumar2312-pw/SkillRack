#include <stdio.h>
int main() {
    int x, y, maxVal, res;
    char op = '*';
    scanf("%d %d", &x, &y);
    maxVal = x * y;
    
    res = x - y;
    if(res > maxVal) { maxVal = res; op = '-'; }

    res = x + y;
    if(res > maxVal) { maxVal = res; op = '+'; }

    if(y != 0) {
        res = x / y;
        if(res > maxVal) { maxVal = res; op = '/'; }
    }

    printf("%c\n", op);
    return 0;
}