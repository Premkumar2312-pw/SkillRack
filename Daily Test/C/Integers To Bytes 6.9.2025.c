#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    int mat[N];
    for(int i = 0; i < N; i++) scanf("%d", &mat[i]);

    char s[1000] = "";
    for(int i = 0; i < N; i++) {
        char bin[64];
        int x = mat[i], idx = 0;
        while(x > 0) {
            bin[idx++] = (x % 2) + '0';
            x /= 2;
        }
        for(int j = idx - 1; j >= 0; j--) {
            strncat(s, &bin[j], 1);
        }
    }

    int len = strlen(s);
    char rev[1000];
    for(int i = 0; i < len; i++) rev[i] = s[len - i - 1];
    rev[len] = '\0';

    int e[200], ec = 0;
    for(int i = 0; i < len; i += 8) {
        int val = 0;
        for(int j = 0; j < 8 && (i + j) < len; j++) {
            val = val * 2 + (rev[i + 7 - j] - '0'); 
        }
        e[ec++] = val;
    }

    for(int i = ec - 1; i >= 0; i--) printf("%d ", e[i]);
    return 0;
}