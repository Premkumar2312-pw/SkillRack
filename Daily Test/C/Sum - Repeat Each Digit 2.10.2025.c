#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char n[20];
    int l[20], len, sum = 0;
    scanf("%s", n);
    len = strlen(n);
    for(int i = 0; i < len; i++) {
        char temp[20];
        strcpy(temp, n);
        temp[i] = ((n[i] - '0') * (n[i] - '0')) + '0';
        l[i] = atoi(temp);
        sum += l[i];
    }
    printf("%d
", sum);
    return 0;
}