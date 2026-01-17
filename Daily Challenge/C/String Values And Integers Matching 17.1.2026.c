#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int value(char *w) {
    char *words[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    for (int i = 0; i < 10; i++)
        if (strcmp(w, words[i]) == 0) return i;
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n][2];
    char s[200], cur[20];

    for (int i = 0; i < n; i++) {
        scanf("%s %d", s, &a[i][1]);
        int num = 0, k = 0;
        cur[0] = '\0';

        for (int j = 0; s[j]; j++) {
            cur[k++] = s[j];
            cur[k] = '\0';
            int v = value(cur);
            if (v != -1) {
                num = num * 10 + v;
                k = 0;
                cur[0] = '\0';
            }
        }
        a[i][0] = num;
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][0] == a[j][1])
                printf("%d ", j + 1);

    return 0;
}