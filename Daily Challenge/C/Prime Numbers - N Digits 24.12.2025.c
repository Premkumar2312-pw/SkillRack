#include <stdio.h>

int n;
int a[25];
int used[25];
int res[100000];
int resCnt = 0;

int isPrime(int x) {
    if (x <= 1) return 0;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return 0;
    return 1;
}

void addIfPrime(int val) {
    if (!isPrime(val)) return;
    for (int i = 0; i < resCnt; i++)
        if (res[i] == val) return;
    res[resCnt++] = val;
}

void permute(int depth, int maxLen, int curVal) {
    if (depth > 0 && depth <= maxLen) {
        addIfPrime(curVal);
    }
    if (depth == maxLen) return;

    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = 1;
            permute(depth + 1, maxLen, curVal * 10 + a[i]);
            used[i] = 0;
        }
    }
}

int cmpInt(const void *p1, const void *p2) {
    int x = *(const int *)p1;
    int y = *(const int *)p2;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int len = 1; len <= 3; len++) {
        for (int i = 0; i < n; i++) used[i] = 0;
        permute(0, len, 0);
    }

    qsort(res, resCnt, sizeof(int), cmpInt);

    for (int i = 0; i < resCnt; i++) {
        if (i == 0 || res[i] != res[i - 1])
            printf("%d ", res[i]);
    }
    return 0;
}