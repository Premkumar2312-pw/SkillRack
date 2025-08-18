#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char n[1000], temp[2000];
    scanf("%s", n);
    int res = 0, len = strlen(n);
    for (int i = 0; i < len; i++) {
        int d = n[i] - '0', t = d, k = 0;
        char bin[20];
        while (t > 0) {
            bin[k++] = (t % 2) + '0';
            t /= 2;
        }
        if (k == 0) bin[k++] = '0';
        for (int j = 0; j < k / 2; j++) {
            char c = bin[j]; bin[j] = bin[k-1-j]; bin[k-1-j] = c;
        }
        strncpy(temp, n, i);
        temp[i] = '\0';
        strcat(temp, bin);
        strcat(temp, n + i + 1);
        int num = atoi(temp);
        if (num > res) res = num;
    }
    printf("%d\n", res);
    return 0;
}