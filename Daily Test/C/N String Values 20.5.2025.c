#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char s[n][201]; // assuming max string length is 200
    for (int i = 0; i < n; i++)
        scanf("%s", s[i]);

    int l = strlen(s[0]) / 4;

    for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < 4; j++) {
            char temp1[l+1], temp2[l+1];
            strncpy(temp1, &s[i][j * l], l);
            strncpy(temp2, &s[i+1][j * l], l);
            temp1[l] = temp2[l] = '\0';
            printf("%s%s\n", temp1, temp2);
        }
    }
    return 0;
}