#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char l[100][20], l1[100][20], l3[100][20];
    int l2[100] = {0};
    int n = 0, k = 0, m = 0;

    while (scanf("%s", l[n]) != EOF) n++;

    for (int i = 0; i < n; i++) {
        if (l2[i]) continue;
        int f = 0;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(l[i], l[j]) == 0 && l2[j] == 0) {
                sprintf(l1[k++], "%d", atoi(l[i]) + atoi(l[j]));
                l2[j] = 1;
                f = 1;
                break;
            }
        }
        if (!f) strcpy(l1[k++], l[i]);
        l2[i] = 1;
    }

    for (int i = 0; i < k; i++) {
        if (isalpha(l1[i][0]))
            strcpy(l3[m++], l1[i]);
    }

    for (int i = 0; i < m - 1; i++)
        for (int j = i + 1; j < m; j++)
            if (strcmp(l3[i], l3[j]) > 0) {
                char t[20];
                strcpy(t, l3[i]);
                strcpy(l3[i], l3[j]);
                strcpy(l3[j], t);
            }

    for (int i = 0; i < m; i++)
        printf("%s ", l3[i]);

    return 0;
}