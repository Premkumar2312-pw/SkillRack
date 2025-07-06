#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[101];
    scanf("%s", s);
    int sum = 0, i = 0, len = strlen(s);
    while (i < len) {
        char temp[20] = {0};
        int j = 0;
        char cur = s[i];
        while (i < len && s[i] == cur) {
            temp[j++] = s[i++];
        }
        sum += atoi(temp);
    }
    printf("%d\n", sum);
    return 0;
}