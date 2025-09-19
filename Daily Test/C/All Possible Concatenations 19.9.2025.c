#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *p1, const void *p2) {
    return strcmp(*(const char **)p1, *(const char **)p2);
}

void reverse(char *src, char *dst) {
    int n = strlen(src);
    for (int i = 0; i < n; i++)
        dst[i] = src[n - 1 - i];
    dst[n] = '\0';
}

int main() {
    char s1[201], s2[201], r1[201], r2[201];
    scanf("%200s", s1);
    scanf("%200s", s2);
    reverse(s1, r1);
    reverse(s2, r2);

    char *arr[8];
    for (int i = 0; i < 8; i++) arr[i] = malloc(405);

    sprintf(arr[0], "%s%s", s1, s2);
    sprintf(arr[1], "%s%s", s1, r2);
    sprintf(arr[2], "%s%s", r1, s2);
    sprintf(arr[3], "%s%s", r1, r2);
    sprintf(arr[4], "%s%s", s2, s1);
    sprintf(arr[5], "%s%s", s2, r1);
    sprintf(arr[6], "%s%s", r2, s1);
    sprintf(arr[7], "%s%s", r2, r1);

    qsort(arr, 8, sizeof(char *), cmp);

    for (int i = 0; i < 8; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]);
    }
    return 0;
}