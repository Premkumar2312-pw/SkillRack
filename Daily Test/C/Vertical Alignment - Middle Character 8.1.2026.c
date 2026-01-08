#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d\n", &n);

    char a[n][100], b[n][100];
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        fgets(a[i], 100, stdin);
        a[i][strcspn(a[i], "\n")] = '\0';
        if (strlen(a[i]) > maxLen)
            maxLen = strlen(a[i]);
    }

    for (int i = 0; i < n; i++) {
        int len = strlen(a[i]);
        if (len < maxLen) {
            int pad = (maxLen - len) / 2;
            int idx = 0;
            for (int j = 0; j < pad; j++) b[i][idx++] = '*';
            strcpy(&b[i][idx], a[i]);
            idx += len;
            for (int j = 0; j < pad; j++) b[i][idx++] = '*';
            b[i][idx] = '\0';
        } else {
            strcpy(b[i], a[i]);
        }
    }

    for (int i = 0; i < maxLen; i++) {
        for (int j = 0; j < n; j++)
            printf("%c", b[j][i]);
        printf("\n");
    }
    return 0;
}