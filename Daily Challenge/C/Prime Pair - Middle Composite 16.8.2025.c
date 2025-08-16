#include <stdio.h>
#include <math.h>
#define MAX 100200

int main() {
    int n;
    scanf("%d", &n);
    int limit = n + 100;
    int p[MAX] = {0};
    
    for (int i = 2; i <= limit; i++) p[i] = 1;
    for (int i = 2; i * i <= limit; i++) {
        if (p[i]) {
            for (int j = i * i; j <= limit; j += i)
                p[j] = 0;
        }
    }

    int primes[MAX], k = 0;
    for (int i = 2; i <= limit; i++) if (p[i]) primes[k++] = i;

    for (int i = 0; i < k - 1; i++) {
        if (primes[i] + primes[i+1] == 2 * n) {
            printf("%d %d", primes[i], primes[i+1]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}