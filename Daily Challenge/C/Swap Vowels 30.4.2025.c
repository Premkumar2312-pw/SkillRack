#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    char s[1001];
    scanf("%s", s);

    int idx[1000], count = 0;

    for (int i = 0; s[i]; i++) {
        if (isVowel(s[i]))
            idx[count++] = i;
    }

    for (int i = 0; i + 1 < count; i += 2) {
        char temp = s[idx[i]];
        s[idx[i]] = s[idx[i + 1]];
        s[idx[i + 1]] = temp;
    }

    printf("%s\n", s);
    return 0;
}