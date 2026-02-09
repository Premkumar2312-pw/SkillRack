#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort(char *s) {
    for (int i = 0; s[i]; i++)
        for (int j = i + 1; s[j]; j++)
            if (s[i] > s[j]) {
                char t = s[i]; s[i] = s[j]; s[j] = t;
            }
}

int main() {
    char words[100][100], key[100][100];
    int n = 0;

    while (scanf("%s", words[n]) != EOF) {
        strcpy(key[n], words[n]);
        sort(key[n]);
        n++;
    }

    for (int i = 0; i < n; i++) {
        if (key[i][0] == '\0') continue;
        for (int j = i; j < n; j++) {
            if (strcmp(key[i], key[j]) == 0) {
                printf("%s ", words[j]);
                key[j][0] = '\0';
            }
        }
        printf("\n");
    }
}