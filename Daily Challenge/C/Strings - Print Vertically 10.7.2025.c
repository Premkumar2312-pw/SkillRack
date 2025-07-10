#include <stdio.h>
#include <string.h>

int main() {
    char s1[101], s2[101], s3[101];
    scanf("%s %s %s", s1, s2, s3);
    int len1 = strlen(s1), len2 = strlen(s2), len3 = strlen(s3);
    int p1 = strchr(s1, s2[0]) - s1;
    int p2 = strchr(s1, s3[0]) - s1;

    if (p1 == p2) {
        s1[p1] = '#';
        p2 = strchr(s1, s3[0]) - s1;
    }

    printf("%s\n", s1);
    int c = 1, d = 1, x = len2 > len3 ? len2 : len3;
    for (int i = 1; i < x; i++) {
        for (int j = 0; j < len1; j++) {
            if (j == p1 && c < len2) {
                printf("%c", s2[c++]);
            } else if (j == p2 && d < len3) {
                printf("%c", s3[d++]);
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}