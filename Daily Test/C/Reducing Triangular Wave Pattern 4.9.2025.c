#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    printf("#\n");

    int tri = 1;
    for (int j = 2; j < N - 1; j++) tri += 2;

    int start = 1, copy = tri, b = 1, end = N, st = start;
    char a[100][500];  
    int lineCount = 0;

    while (start < end - 1) {
        for (int i = st; i < N - 1; i++) {
            char s[500];
            if (start % 2 == 1) {
                if (start == 1) {
                    sprintf(s, "%.*s#%.*s#", b, "********************", tri, "********************************************");
                    strcpy(a[lineCount++], s);
                    tri -= 2; b++;
                } else {
                    sprintf(s, "%.*s#", tri, "********************************************");
                    strcat(a[i - 1], s);
                    tri -= 2;
                }
            } else {
                sprintf(s, "%.*s#", tri, "********************************************");
                strcat(a[i - 1], s);
                tri += 2;
            }
        }
        if (start % 2 == 1) { tri = 1; st++; }
        else { tri = copy - 2; N--; }
        start++; copy -= 2;
    }

    for (int i = 0; i < lineCount; i++) printf("%s\n", a[i]);
    for (int i = 0; i < b; i++) printf("*");
    printf("#\n");
    return 0;
}