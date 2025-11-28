#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char op[105];
    char s[1005] = "";
    for (int k = 0; k < n; k++) {
        scanf("%s", op);
        int len = strlen(op);
        if (op[0] == '+') {
            strcat(s, op + 1);
        } else if (op[0] == '-') {
            char *substr = op + 1;
            char *pos = strstr(s, substr);
            if (pos) {
                int idx = pos - s;
                memmove(s + idx, s + idx + 1, strlen(s) - idx);
            }
        } else if (op[len-1] == '+') {
            char tmp[1005];
            strncpy(tmp, op, len-1);
            tmp[len-1] = '';
            char old[1005];
            strcpy(old, s);
            strcpy(s, tmp);
            strcat(s, old);
        } else if (op[len-1] == '-') {
            char tmp[105];
            strncpy(tmp, op, len-1);
            tmp[len-1] = '';
            char *pos = strstr(s, tmp);
            if (pos) {
                int idx = pos - s;
                memmove(s + idx, s + idx + 1, strlen(s) - idx);
            }
        }
    }
    if (strlen(s) > 0) printf("%s
", s);
    else printf("-1
");
    return 0;
}