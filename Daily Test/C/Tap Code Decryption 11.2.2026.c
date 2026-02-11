#include <stdio.h>
#include <string.h>

int main() {
    char code[100][50];
    char s[5][100][50];
    int codeCount = 0;

    // Read first line
    while (scanf("%s", code[codeCount]) == 1) {
        codeCount++;
        if (getchar() == '\n') break;
    }

    // Read 5 rows
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < codeCount; j++) {
            scanf("%s", s[i][j]);
        }
    }

    for (int i = 0; i < codeCount; i += 2) {
        int r = strlen(code[i]) - 1;
        int c = strlen(code[i + 1]) - 1;

        if (strlen(s[r][c]) > 1)
            printf("%c", s[r][c][0]);
        else
            printf("%s", s[r][c]);
    }

    return 0;
}