#include <stdio.h>
#include <string.h>

int main() {
    char a[1000], b[1000];
    scanf("%s %s", a, b);

    int i = 0, j = 0, cnt = 0;

    while (j < strlen(b)) {
        if (i < strlen(a) && a[i] == b[j]) {
            i++; j++;
        }
        else if (j > 0 && b[j] == b[j - 1]) {
            cnt++;
            while (j < strlen(b) && b[j] == b[j - 1])
                j++;
        }
        else {
            j++;
        }
    }

    printf("%d", cnt);
    return 0;
}