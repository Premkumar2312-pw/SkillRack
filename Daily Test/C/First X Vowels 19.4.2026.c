#include <stdio.h>
#include <string.h>

int main() {
    int x, count = 0;
    char str[1001];

    scanf("%d", &x);
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if(strchr("aeiouAEIOU", c)) {
            printf("%c", c);
            count++;
        }

        if(count == x) break;
    }

    return 0;
}