#include <stdio.h>
#include <stdlib.h>

int abs_cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, i, j, max = -1;
    scanf("%d", &n);
    int arr[n], found[2001] = {0};

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        found[arr[i] + 1000] = 1; // Shift index to handle negatives
    }

    for (i = 1; i <= 1000; i++) {
        if (found[i + 1000] && found[-i + 1000]) {
            if (i > max)
                max = i;
        }
    }

    printf("%d", max);
    return 0;
}