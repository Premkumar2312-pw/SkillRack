#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    scanf("%s", s);
    int n = strlen(s);
    char out[2000];
    int outIdx = 0;

    for (int i = 0; i < n;) {
        int j = i + 1;
        while (j < n && (isupper(s[i]) ? isupper(s[j]) : islower(s[j]))) {
            j++;
        }
        if (j - i >= 2) {
            for (int k = i; k < j; k++) {
                if (isupper(s[k])) out[outIdx++] = tolower(s[k]);
                else if (islower(s[k])) out[outIdx++] = toupper(s[k]);
                else out[outIdx++] = s[k];
            }
        } else {
            out[outIdx++] = s[i];
        }
        i = j;
    }
    out[outIdx] = '\0';
    printf("%s\n", out);
    return 0;
}