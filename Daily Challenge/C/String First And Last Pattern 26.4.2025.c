#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int l = strlen(s);
    
    for (int i = 1; i <= l; i++) {
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", s[j]);
        }
        for (int j = l - i; j < l; j++) {
            printf("%c", s[j]);
        }
        printf("\n");
    }
    
    return 0;
}