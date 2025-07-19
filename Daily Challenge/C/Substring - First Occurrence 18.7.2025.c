#include <stdio.h>
#include <string.h>

int main() {
    char s1[1001], s2[101];
    scanf("%s %s", s1, s2);
    int min = 1000, max = -1;
    for (int i = 0; s2[i]; i++) {
        for (int j = 0; s1[j]; j++) {
            if (s2[i] == s1[j]) {
                if (j < min) min = j;
                if (j > max) max = j;
                break;
            }
        }
    }
    for (int i = min; i <= max; i++)
        printf("%c", s1[i]);
    return 0;
}