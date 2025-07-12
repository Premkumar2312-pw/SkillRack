#include <stdio.h>
#include <string.h>
#include <ctype.h>

void rotate(char *s, int k, char *res) {
    int len = strlen(s), i;
    k %= len;
    for(i = 0; i < len; i++)
        res[i] = s[(len - k + i) % len];
    res[len] = '\0';
}

int main() {
    char w[100][101], temp[101], r[100][101];
    int i = 0, k, c = 0;

    while (scanf("%s", temp)) {
        if (isdigit(temp[0]) && strlen(temp) == strspn(temp, "0123456789")) {
            k = atoi(temp); break;
        }
        strcpy(w[i++], temp);
    }

    for (int j = 0; j < i; j++) {
        rotate(w[j], k, r[j]);
        if (strcmp(w[j], r[j]) == 0) c++;
    }

    printf("%d\n", c);
    for (int j = 0; j < i; j++)
        printf("%s ", r[j]);
}