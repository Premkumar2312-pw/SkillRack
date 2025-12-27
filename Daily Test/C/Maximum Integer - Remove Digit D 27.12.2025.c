#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char n[1000], d;
    scanf("%s", n);
    scanf(" %c", &d);

    int len = strlen(n);
    long long max = -1;

    for (int i = 0; i < len; i++) {
        if (n[i] == d) {
            char temp[1000];
            int k = 0;

            for (int j = 0; j < len; j++) {
                if (j != i)
                    temp[k++] = n[j];
            }
            temp[k] = '\0';

            long long val = atoll(temp);
            if (val > max) max = val;
        }
    }

    printf("%lld", max);
    return 0;
}