#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    char s[10005];
    scanf("%s", s);

    char expected[10005] = "";
    char buf[12];
    for (int i = x; i <= y; i++) {
        sprintf(buf, "%d", i);
        strcat(expected, buf);
    }
    if (strcmp(s, expected) == 0)
        printf("YES
");
    else
        printf("NO
");
    return 0;
}