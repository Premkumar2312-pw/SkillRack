#include <stdio.h>
#include <string.h>

int main() {
    char s1[1001], s2[1001];
    scanf("%s %s", s1, s2);
    int len1 = strlen(s1), len2 = strlen(s2);
    int v1[1001] = {0}, v2[1001] = {0}, sc = 0;

    int minLen = len1 < len2 ? len1 : len2;
    for (int i = 0; i < minLen; i++) {
        if (s1[i] == s2[i]) {
            v1[i] = v2[i] = 1;
            sc += 2;
        }
    }

    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (s1[i] == s2[j] && !v1[i] && !v2[j]) {
                v1[i] = v2[j] = 1;
                sc += 1;
                break;
            }
        }
    }

    printf("%d\n", sc);
    return 0;
}