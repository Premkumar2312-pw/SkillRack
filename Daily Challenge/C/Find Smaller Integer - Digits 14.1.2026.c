#include <stdio.h>
#include <limits.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    long arr[n];
    for(int i = 0; i < n; i++)
        scanf("%ld", &arr[i]);

    long k;
    scanf("%ld", &k);
    char kstr[20];
    sprintf(kstr, "%ld", k);

    long sum = 0;
    for(int i = 0; kstr[i]; i++) {
        char d = kstr[i];
        long min = LONG_MAX;
        int found = 0;

        for(int j = 0; j < n; j++) {
            char numstr[20];
            sprintf(numstr, "%ld", arr[j]);
            if(strchr(numstr, d)) {
                if(arr[j] < min) min = arr[j];
                found = 1;
            }
        }

        if(found) sum += min;
    }

    printf("%ld\n", sum);
    return 0;
}