#include <stdio.h>
#include <string.h>

void getSymmetricSubstrings(char *s, int m, char substrings[][100], int *count) {
    int len = strlen(s);
    *count = 0;
    for (int ln = (len - m - 1 < m ? len - m - 1 : m) * 2 + 1; ln > 0; ln--) {
        int h = ln / 2;
        if (h >= 0) {
            strncpy(substrings[*count], s + (m - h), ln);
            substrings[*count][ln] = '\0';
            (*count)++;
        }
    }
}

int main() {
    char a[100], b[100];
    scanf(" %[^\n]s", a);
    scanf(" %[^\n]s", b);

    int c = strlen(a) / 2, d = strlen(b) / 2;
    if (strlen(a) == 0 || strlen(b) == 0) {
        printf("-1\n");
        return 0;
    }

    char e[100][100], f[100][100];
    int e_count, f_count;

    getSymmetricSubstrings(a, c, e, &e_count);
    getSymmetricSubstrings(b, d, f, &f_count);

    for (int i = 0; i < e_count; i++) {
        for (int j = 0; j < f_count; j++) {
            if (strcmp(e[i], f[j]) == 0) {
                printf("%s\n", e[i]);
                return 0;
            }
        }
    }

    printf("-1\n");
    return 0;
}
