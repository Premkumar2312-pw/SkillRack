#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    scanf("%[^\n]", s);
    int len = strlen(s);
    int num = 0;
    char word[1000];
    int wordIndex = 0;
    
    for (int i = 0; i <= len; i++) {
        if (isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
        } else if (isalpha(s[i]) || s[i] == ' ') {
            if (num > 0) {
                for (int j = 0; j < num; j++) {
                    printf("%s ", word);
                }
                num = 0;
            }
            if (isalpha(s[i])) {
                word[wordIndex++] = s[i];
            }
        } else {
            if (wordIndex > 0) {
                word[wordIndex] = '\0';
                wordIndex = 0;
            }
        }
    }
    return 0;
}