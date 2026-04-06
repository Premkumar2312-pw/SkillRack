#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int n = strlen(s);
    int m = n / 2;

    // reverse first half
    for(int i = m-1; i >= 0; i--)
        printf("%c", s[i]);

    if(n % 2 == 1) {
        printf("%c", s[m]); // middle
        for(int i = n-1; i > m; i--)
            printf("%c", s[i]);
    } else {
        for(int i = n-1; i >= m; i--)
            printf("%c", s[i]);
    }

    return 0;
}