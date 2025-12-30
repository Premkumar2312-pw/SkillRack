#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    long long sum = 0;
    char s[100], temp[200];

    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        temp[0] = '\0';

        for (int j = 0; s[j]; j++) {
            if (isdigit(s[j])) {
                char t[2] = {s[j], '\0'};
                strcat(temp, t);
            } else {
                char num[5];
                sprintf(num, "%d", s[j] - 'A' + 10);
                strcat(temp, num);
            }
        }
        sum += atoll(temp);
    }

    printf("%lld", sum);
    return 0;
}