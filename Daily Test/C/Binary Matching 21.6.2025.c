#include <stdio.h>
#include <string.h>

void toBinary(int n, char *bin) {
    int i = 0;
    while(n > 0) {
        bin[i++] = (n % 2) + '0';
        n /= 2;
    }
    bin[i] = '\0';
    // reverse
    for(int j = 0; j < i/2; j++) {
        char t = bin[j];
        bin[j] = bin[i-j-1];
        bin[i-j-1] = t;
    }
}

int main() {
    int x, n, i, val, count = 0;
    scanf("%d %d", &x, &n);
    char xb[35], b[35];
    toBinary(x, xb);

    for(i = 0; i < n; i++) {
        scanf("%d", &val);
        toBinary(val, b);
        int lx = strlen(xb), lb = strlen(b);
        if(lx >= lb && strcmp(xb + (lx - lb), b) == 0)
            count++;
    }
    printf("%d\n", count);
    return 0;
}