#include <stdio.h>

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    int freq[1000001] = {0};

    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        freq[x]++;
    }

    int cnt = 0;

    for(int i = a; i <= b; i++) {
        if(freq[i] > 0)
            cnt++;
    }

    printf("%d", cnt);
    return 0;
}