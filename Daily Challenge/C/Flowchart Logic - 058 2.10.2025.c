#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    while(n > 0) {
        int d = n % 10;
        while(d > 0) {
            printf("%d", d);
            if(n % 2 == 0)
                break;
            d--;
        }
        n = n / 10;
    }
    return 0;
}