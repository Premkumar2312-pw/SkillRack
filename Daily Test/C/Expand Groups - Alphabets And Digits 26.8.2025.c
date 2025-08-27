#include <stdio.h>
#include <ctype.h>
#define MAX 100
int main() {
    char S[MAX], st[MAX];
    int top = -1;
    scanf("%s", S);
    for (int i = 0; S[i]; i++) {
        if (isalpha(S[i])) {
            st[++top] = S[i];
        } else {
            int times = S[i] - '0';
            for (int j = 0; j < times; j++)
                printf("%c", st);
            // Shift stack left (simulate pop(0))
            for (int j = 0; j < top; j++)
                st[j] = st[j+1];
            top--;
        }
    }
    return 0;
}
