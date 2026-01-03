#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    char s[100][50];
    for (int i = 0; i < n; i++)
        scanf("%s", s[i]);

    int l1[100], l2[200], a = 0, b = 0;

    for (int i = 0; i < n; i++) {
        char p[20] = "", g[20] = "";
        for (int j = 0; s[i][j]; j++) {
            if (isdigit(s[i][j])) {
                strncat(p, &s[i][j], 1);
                strncat(g, &s[i][j], 1);
            }
            if (s[i][j] == '|') {
                l2[b++] = atoi(g);
                g[0] = '\0';
            }
        }
        l1[a++] = atoi(p);
        l2[b++] = atoi(g);
    }

    for (int i = 0; i < b - 1; i++)
        for (int j = i + 1; j < b; j++)
            if (l2[i] > l2[j]) {
                int t = l2[i];
                l2[i] = l2[j];
                l2[j] = t;
            }

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < a; i++) sum1 += l1[i];
    for (int i = 0; i < b; i += 2)
        sum2 += atoi((char[]){'0'+l2[i],'0'+l2[i+1],'\0'});

    printf("%d %d", sum1, sum2);
}