#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[1000];
    int k;
    scanf("%s", s);
    scanf("%d", &k);

    int len = strlen(s);
    for (int i = 1; i <= k; i++) {
        for (int j = 0; j < len; j += 3) {
            char temp[4];
            strncpy(temp, s + j, 3);
            temp[3] = '\0';
            int num = atoi(temp);
            num = (num + i) % 1000;
            printf("%03d", num);
        }
        printf("\n");
    }
    return 0;
}