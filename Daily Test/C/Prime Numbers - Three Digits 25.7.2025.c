#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}

void swap(char *x, char *y) {
    char t = *x; *x = *y; *y = t;
}

void permute(char *str, int l, int r, int len) {
    if (l == r) {
        if (str[0] != '0') {
            int num = atoi(str);
            if (isPrime(num)) printf("%d ", num);
        }
        return;
    }
    for (int i = l; i < r; i++) {
        swap(&str[l], &str[i]);
        str[r] = '\0';
        permute(str, l + 1, r, len);
        swap(&str[l], &str[i]);
    }
}

int main() {
    char s[10], d[10];
    scanf("%s", s);
    int k = 0;
    for (int i = 0; s[i]; i++)
        if (s[i] >= '0' && s[i] <= '9')
            d[k++] = s[i];
    d[k] = '\0';

    char temp[4];
    for (int l = 1; l <= 3; l++) {
        for (int i = 0; i < k; i++) {
            temp[0] = d[i];
            for (int j = 0; j < k; j++) {
                if (l >= 2) temp[1] = d[j];
                for (int m = 0; m < k; m++) {
                    if (l == 3) temp[2] = d[m];
                    temp[l] = '\0';
                    permute(temp, 0, l, l);
                }
            }
        }
    }
    return 0;
}