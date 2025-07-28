#include <stdio.h>

int main() {
    int n, t[1000], i, sum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &t[i]);
    if(n % 2) printf("-1");
    else {
        for(i = 0; i < n; i += 2)
            sum += t[i+1] - t[i];
        printf("%d", sum);
    }
    return 0;
}