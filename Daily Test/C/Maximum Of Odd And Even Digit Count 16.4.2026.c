#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int odd = 0, even = 0;

    while(n > 0) {
        if((n % 10) % 2 == 0)
            even++;
        else
            odd++;
        n /= 10;
    }

    printf("%d", (odd > even) ? odd : even);
    return 0;
}