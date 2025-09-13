#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void sortString(char *s) {
    int n = strlen(s);
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (s[i] > s[j]) {
                char t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
}

int main() {
    int N;
    scanf("%d", &N);
    char val[N][101];
    for (int i = 0; i < N; i++) scanf("%s", val[i]);

    bool flag = true;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            char s1[101], s2[101];
            strcpy(s1, val[i]);
            strcpy(s2, val[j]);
            sortString(s1);
            sortString(s2);

            // remove duplicates
            char u1[101] = "", u2[101] = "";
            int k = 0;
            for (int x = 0; x < strlen(s1); x++)
                if (x == 0 || s1[x] != s1[x-1]) u1[k++] = s1[x];
            u1[k] = '\0';

            k = 0;
            for (int x = 0; x < strlen(s2); x++)
                if (x == 0 || s2[x] != s2[x-1]) u2[k++] = s2[x];
            u2[k] = '\0';

            if (strcmp(u1, u2) == 0) {
                flag = false;
                printf("%s %s\n", val[i], val[j]);
            }
        }
    }
    if (flag) printf("-1\n");
    return 0;
}