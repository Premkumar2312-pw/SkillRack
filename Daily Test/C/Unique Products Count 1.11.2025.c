#include <stdio.h>
#include <string.h>

int is_unique(char a[][101], char b[][101], char c[][101], int count, char *x, char *y, char *z) {
    for (int i = 0; i < count; i++) {
        if (strcmp(a[i], x) == 0 && strcmp(b[i], y) == 0 && strcmp(c[i], z) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    char l1[n][101], l2[n][101], l3[n][101];
    for (int i = 0; i < n; i++) scanf("%100s", l1[i]);
    for (int i = 0; i < n; i++) scanf("%100s", l2[i]);
    for (int i = 0; i < n; i++) scanf("%100s", l3[i]);

    char unique1[n][101], unique2[n][101], unique3[n][101];
    int unique_count = 0;

    for (int i = 0; i < n; i++) {
        if (is_unique(unique1, unique2, unique3, unique_count, l1[i], l2[i], l3[i])) {
            strcpy(unique1[unique_count], l1[i]);
            strcpy(unique2[unique_count], l2[i]);
            strcpy(unique3[unique_count], l3[i]);
            unique_count++;
        }
    }

    printf("%d
", unique_count);
    return 0;
}