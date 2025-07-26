#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[1001];
    fgets(s, sizeof(s), stdin);

    bool inQuotes = false;
    char temp[1001];
    int ti = 0;

    for (int i = 0; s[i]; i++) {
        if (s[i] == '"') {
            inQuotes = !inQuotes;
            continue;
        }
        if (!inQuotes && s[i] == ' ') {
            if (ti > 0) {
                temp[ti] = '\0';
                printf("%s\n", temp);
                ti = 0;
            }
        } else {
            temp[ti++] = s[i];
        }
    }

    if (ti > 0) {
        temp[ti] = '\0';
        printf("%s\n", temp);
    }

    return 0;
}