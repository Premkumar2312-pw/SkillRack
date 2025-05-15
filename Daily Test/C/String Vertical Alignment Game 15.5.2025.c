#include <stdio.h>
#include <string.h>

int main() {
    char S1[1001], S2[1001];
    scanf("%[^\n]%*c", S1);
    scanf("%[^\n]%*c", S2);

    int len1 = strlen(S1);
    int len2 = strlen(S2);
    int mlen = (len1 > len2) ? len1 : len2;

    for (int i = 0; i < mlen; i++) {
        char c1 = (i < len1) ? S1[i] : ' ';
        char c2 = (i < len2) ? S2[i] : ' ';
        
        if (c1 == ' ' && c2 == ' ') printf("**\n");
        else if (c1 == ' ') printf("%c*\n", c2);
        else if (c2 == ' ') printf("%c*\n", c1);
        else printf("%c%c\n", c1, c2);
    }

    return 0;
}