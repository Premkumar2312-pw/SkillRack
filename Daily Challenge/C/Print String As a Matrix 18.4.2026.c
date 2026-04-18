#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int n;

    scanf("%s", str);   // for single word input
    scanf("%d", &n);

    int cnt = 0;

    for(int i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
        cnt++;

        if(cnt == n) {
            printf("\n");
            cnt = 0;
        }
    }

    return 0;
}