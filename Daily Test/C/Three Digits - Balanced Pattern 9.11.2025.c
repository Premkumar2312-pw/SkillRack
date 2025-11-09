#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    char s1[101], s2[101], s3[101];
    scanf("%s %s %s", s1, s2, s3);
    int n = strlen(s1);
    int h = 0;
    for (int i = 0; i < n; i++) {
        int d1 = s1[i] - '0';
        int d2 = s2[i] - '0';
        int d3 = s3[i] - '0';
        int sum = d1 + d2 + d3;
        h = max(h, sum);
    }
    for (int r = 1; r <= h; r++) {
        for (int i = 0; i < n; i++) {
            int d1 = s1[i] - '0';
            int d2 = s2[i] - '0';
            int d3 = s3[i] - '0';
            if (r <= d1)
                putchar('*');
            else if (r <= d1 + d2)
                putchar('-');
            else
                putchar('*');
        }
        putchar('
');
    }
    return 0;
}