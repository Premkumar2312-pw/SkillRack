#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char L[10][6] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    char s[100];
    scanf("%s", s);
    int len = strlen(s), i = 0;
    while (i < len) {
        if (isdigit(s[i])) {
            printf("%c", s[i]);
            i++;
        } else {
            char p[10] = "";
            int k = 0;
            while (i < len && isalpha(s[i])) {
                p[k++] = s[i++];
                p[k] = '';
            }
            for (int j = 0; j < 10; j++) {
                if (strcmp(p, L[j]) == 0) {
                    printf("%d", j);
                    break;
                }
            }
        }
    }
    return 0;
}