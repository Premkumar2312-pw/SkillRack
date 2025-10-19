#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], c[100], d[100];
    int w = 1;
    fgets(a, 100, stdin); a[strcspn(a, "
")] = 0;
    fgets(b, 100, stdin); b[strcspn(b, "
")] = 0;
    fgets(c, 100, stdin); c[strcspn(c, "
")] = 0;
    fgets(d, 100, stdin); d[strcspn(d, "
")] = 0;
    int len_a = strlen(a), len_b = strlen(b), len_c = strlen(c), len_d = strlen(d);

    for(int i = 1; i < len_a + len_c; i++) {
        if(i < len_a) {
            for(int j = 1; j < len_b + len_d; j++) {
                if(j == len_d)
                    printf("%c", a[len_a-i]);
                else
                    printf("*");
            }
            printf("
");
        }
        if(i == len_a) {
            for(int x = len_d - 1; x >= 0; x--) printf("%c", d[x]);
            for(int x = 1; x < len_b; x++) printf("%c", b[x]);
            printf("
");
        }
        if(i > len_a) {
            for(int j = 1; j < len_b + len_d; j++) {
                if(j == len_d)
                    printf("%c", c[w]);
                else
                    printf("*");
            }
            w++;
            printf("
");
        }
    }
    return 0;
}