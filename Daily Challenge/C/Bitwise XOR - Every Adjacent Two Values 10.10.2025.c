#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    while(N > 1) {
        int res[N-1];
        for(i = 0; i < N-1; i++)
            res[i] = arr[i] ^ arr[i+1];
        for(i = 0; i < N-1; i++)
            printf("%d ", res[i]);
        printf("
");
        for(i = 0; i < N-1; i++)
            arr[i] = res[i];
        N--;
    }
    return 0;
}