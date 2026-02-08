#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int roll[n], A[n], B[n], C[n];
    for (int i = 0; i < n; i++)
        scanf("%d %d %d %d", &roll[i], &A[i], &B[i], &C[i]);

    int q;
    scanf("%d", &q);

    while (q--) {
        char ch, s, o;
        int v;
        scanf(" %c", &ch);
        scanf(" %c %c %d", &s, &o, &v);

        int found = 0;
        for (int i = 0; i < n; i++) {
            int mark = (s == 'A') ? A[i] : (s == 'B') ? B[i] : C[i];

            int ok = 0;
            if (o == '<' && mark < v) ok = 1;
            if (o == '>' && mark > v) ok = 1;
            if (o == '=' && mark == v) ok = 1;

            if (ok) {
                found = 1;
                if (ch == '*')
                    printf("%d %d %d %d\n", roll[i], A[i], B[i], C[i]);
                else if (ch == 'A')
                    printf("%d\n", A[i]);
                else if (ch == 'B')
                    printf("%d\n", B[i]);
                else if (ch == 'C')
                    printf("%d\n", C[i]);
            }
        }
        if (!found) printf("-1\n");
    }
    return 0;
}