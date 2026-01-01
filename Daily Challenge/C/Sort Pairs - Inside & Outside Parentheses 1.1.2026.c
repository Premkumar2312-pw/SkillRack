#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    char l[100][100];
    for (int i = 0; i < n; i++) scanf("%s", l[i]);

    int l1[100], l2[100], pos[100];
    for (int i = 0; i < n; i++) {
        char *a = strchr(l[i], '(');
        char *b = strchr(l[i], ')');
        int ai = a - l[i];

        if (ai == 0) {
            l2[i] = atoi(b + 1);
            l1[i] = atoi(a + 1);
        } else {
            l2[i] = atoi(l[i]);
            l1[i] = atoi(a + 1);
        }
        pos[i] = ai;
    }

    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++) {
            if (l1[i] > l1[j]) {
                int t=l1[i]; l1[i]=l1[j]; l1[j]=t;
            }
            if (l2[i] < l2[j]) {
                int t=l2[i]; l2[i]=l2[j]; l2[j]=t;
            }
        }

    for (int i = 0; i < n; i++) {
        if (pos[i] == 0)
            printf("(%d)%d ", l1[i], l2[i]);
        else
            printf("%d(%d) ", l2[i], l1[i]);
    }
}