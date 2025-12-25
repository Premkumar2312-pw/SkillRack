#include <stdio.h>
#include <string.h>

void ab(char a, char b[3][3], int c) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a == b[i][j]) {
                printf("%d%d%d", c, i + 1, j + 1);
            }
        }
    }
}

int main() {
    char s1[105], s2[105];
    scanf("%s", s1);
    scanf("%s", s2);

    char m1[3][3], m2[3][3], m3[3][3];
    int k = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            m1[i][j] = s2[k++];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            m2[i][j] = s2[k++];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            m3[i][j] = s2[k++];

    int n = strlen(s1);
    for (int idx = 0; idx < n; idx++) {
        ab(s1[idx], m1, 1);
        ab(s1[idx], m2, 2);
        ab(s1[idx], m3, 3);
    }

    return 0;
}