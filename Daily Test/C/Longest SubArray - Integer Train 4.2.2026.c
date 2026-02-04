#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int firstDigit(char *s) {
    return s[0];
}
int lastDigit(char *s) {
    return s[strlen(s) - 1];
}

int main() {
    int n;
    scanf("%d", &n);

    char arr[n][20];
    for (int i = 0; i < n; i++)
        scanf("%s", arr[i]);

    int bestLen = 0, bestSum = 0;

    for (int i = 0; i < n - 1; ) {
        int start = i;
        int sum = atoi(arr[i]);

        while (i < n - 1 && lastDigit(arr[i]) == firstDigit(arr[i + 1])) {
            sum += atoi(arr[i + 1]);
            i++;
        }

        int len = i - start + 1;
        if (len >= 2) {
            if (len > bestLen || (len == bestLen && sum > bestSum)) {
                bestLen = len;
                bestSum = sum;
            }
        }
        i++;
    }

    if (bestLen == 0) {
        int mx = atoi(arr[0]);
        for (int i = 1; i < n; i++)
            if (atoi(arr[i]) > mx) mx = atoi(arr[i]);
        printf("%d", mx);
    } else {
        printf("%d", bestSum);
    }
}