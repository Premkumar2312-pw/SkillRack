#include <stdio.h>
#include <string.h>

int main() {
    char words[100][100];
    int n = 0, maxLen = 0;
    while (scanf("%s", words[n]) == 1) {
        int len = strlen(words[n]);
        if (len > maxLen) maxLen = len;
        n++;
        if (getchar() == '\n') break;
    }

    char padded[n][maxLen + 1];
    for (int i = 0; i < n; i++) {
        int len = strlen(words[i]);
        int pad = maxLen - len;
        if ((i + 1) % 2 == 1) {
            strcpy(padded[i], words[i]);
            for (int j = len; j < maxLen; j++) padded[i][j] = '*';
        } else {
            for (int j = 0; j < pad; j++) padded[i][j] = '*';
            strcpy(padded[i] + pad, words[i]);
        }
        padded[i][maxLen] = '\0';
    }

    for (int row = 0; row < maxLen; row++) {
        for (int col = 0; col < n; col++) {
            printf("%c", padded[col][row]);
        }
        printf("\n");
    }
    return 0;
}