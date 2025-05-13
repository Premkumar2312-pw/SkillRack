#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char str[101];
    int index;
} String;

int compare(const void *a, const void *b) {
    String *s1 = (String *)a;
    String *s2 = (String *)b;
    
    int len1 = strlen(s1->str), len2 = strlen(s2->str);
    char mid1 = s1->str[len1 / 2];
    char mid2 = s2->str[len2 / 2];

    if (mid1 != mid2) return mid1 - mid2;
    if (s1->str[0] != s2->str[0]) return s1->str[0] - s2->str[0];
    if (s1->str[len1 - 1] != s2->str[len2 - 1]) return s1->str[len1 - 1] - s2->str[len2 - 1];
    return s1->index - s2->index;
}

int main() {
    int n;
    scanf("%d", &n);
    String arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i].str);
        arr[i].index = i;
    }

    qsort(arr, n, sizeof(String), compare);

    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i].str);

    return 0;
}