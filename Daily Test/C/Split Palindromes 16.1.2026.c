#include <stdio.h>
#include <string.h>

int isPal(char s[]) {
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        if (s[i] != s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main() {
    char str[1000];
    scanf("%s", str);

    int n = strlen(str);

    for (int i = 1; i < n; i++) {
        char left[1000], right[1000];

        strncpy(left, str, i);
        left[i] = '\0';
        strcpy(right, str + i);

        if (isPal(left) && isPal(right)) {
            printf("%s\n%s\n", left, right);
            break;
        }
    }
    return 0;
}