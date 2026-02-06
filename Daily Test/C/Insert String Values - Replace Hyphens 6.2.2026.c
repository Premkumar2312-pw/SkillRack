#include <stdio.h>
#include <string.h>

int main() {
    int X, N;
    scanf("%d", &X);
    scanf("%d", &N);

    char S[X + 1];
    for (int i = 0; i < X; i++) S[i] = '-';
    S[X] = '\0';

    for (int k = 0; k < N; k++) {
        char str[101];
        int P;
        scanf("%s %d", str, &P);
        P--;  // convert to 0-based

        int L = strlen(str);
        int ok = 1;

        if (P + L <= X) {
            for (int i = 0; i < L; i++) {
                if (S[P + i] != '-') {
                    ok = 0;
                    break;
                }
            }
            if (ok) {
                for (int i = 0; i < L; i++)
                    S[P + i] = str[i];
            }
        }
    }

    printf("%s", S);
    return 0;
}