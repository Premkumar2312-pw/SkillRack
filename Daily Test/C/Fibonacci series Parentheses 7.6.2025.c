#include <stdio.h>

long long len[31];

char f(int n, long long x) {
    if (n <= 2)
        return (x == 1) ? '(' : ')';
    if (x == 1) return '(';
    if (x == len[n]) return ')';
    if (x <= 1 + len[n - 1]) return f(n - 1, x - 1);
    return f(n - 2, x - 1 - len[n - 1]);
}

int main() {
    int n;
    long long x;
    scanf("%d %lld", &n, &x);

    len[1] = len[2] = 2;
    for (int i = 3; i <= n; i++)
        len[i] = 2 + len[i - 1] + len[i - 2];

    printf("%c\n", f(n, x));
    return 0;
}