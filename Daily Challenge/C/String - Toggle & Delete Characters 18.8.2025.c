#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char s[101], b[101], r[101];
    scanf("%s %s", s, b);
    int n = strlen(s), j = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] == '1' && isalpha(s[i])) {
            if (islower(s[i])) r[j++] = toupper(s[i]);
            else r[j++] = tolower(s[i]);
        } else {
            r[j++] = s[i];
        }
    }
    r[j] = '\0';
    printf("%s", r);
    return 0;
}
