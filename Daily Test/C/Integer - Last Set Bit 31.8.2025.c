#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);
    int val[N];
    for (int i = 0; i < N; i++) scanf("%d", &val[i]);
    
    long long tot = 0;
    for (int i = 0; i < N; i++) {
        int num = val[i], l = 0;
        while ((num & 1) == 0) {
            l++;
            num >>= 1;
        }
        tot += (long long)pow(2, l);
    }
    printf("%lld\n", tot);
    return 0;
}