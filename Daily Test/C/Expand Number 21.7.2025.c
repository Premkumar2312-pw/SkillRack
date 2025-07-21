#include <stdio.h>
#include <string.h>

int main() {
    char n[20];
    scanf("%s", n);
    int len = strlen(n), first = 1;

    for (int i = 0; i < len; i++) {
        if (n[i] != '0') {
            if (!first) printf("+");
            printf("%c", n[i]);
            for (int j = i + 1; j < len; j++) printf("0");
            first = 0;
        }
    }
    return 0;
}
