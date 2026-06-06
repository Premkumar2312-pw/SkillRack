#include <stdio.h>
#include <string.h>

int main() {
    char s[100], row[100];
    int r, c, cnt = 0;

    scanf("%s", s);
    scanf("%d%d", &r, &c);

    for(int i = 0; i < r; i++) {
        int k = 0;
        for(int j = 0; j < c; j++) {
            char ch;
            scanf(" %c", &ch);
            row[k++] = ch;
        }
        row[k] = '\0';

        char *p = row;
        while((p = strstr(p, s)) != NULL) {
            cnt++;
            p++;
        }
    }

    printf("%d", cnt);
    return 0;
}