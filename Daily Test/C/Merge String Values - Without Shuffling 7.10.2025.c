#include <stdio.h>
#include <string.h>

int main() {
    char s1[110], s2[110], result[220];
    scanf("%s%s", s1, s2);
    int i = 0, j = 0, k = 0;
    int n1 = strlen(s1), n2 = strlen(s2);
    while (i < n1 || j < n2) {
        if (i < n1 && j < n2 && s1[i] == s2[j]) {
            char ch = s1[i];
            while (i < n1 && s1[i] == ch) result[k++] = s1[i++];
            while (j < n2 && s2[j] == ch) result[k++] = s2[j++];
        } else {
            if (i < n1) result[k++] = s1[i++];
            else if (j < n2) result[k++] = s2[j++];
        }
    }
    result[k] = '';
    printf("%s
", result);
    return 0;
}