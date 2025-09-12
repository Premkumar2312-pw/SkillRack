#include <stdio.h>
#include <string.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    char grid[500][500];
    char s[250001] = "";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            char ch;
            scanf(" %c", &ch);
            int len = strlen(s);
            s[len] = ch;
            s[len + 1] = '\0';
        }
    }
    int a = -1, b = -1;
    for (int i = 0; s[i]; i++) {
        if (s[i] == '(') a = i;
        if (s[i] == ')' && b == -1) b = i;
    }
    if (a < b)
        for (int i = a + 1; i < b; i++) putchar(s[i]);
    else {
        for (int i = a + 1; s[i]; i++) putchar(s[i]);
        for (int i = 0; i < b; i++) putchar(s[i]);
    }
    printf("\n");
    return 0;
}