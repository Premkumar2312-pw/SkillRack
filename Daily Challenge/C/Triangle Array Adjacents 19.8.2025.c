#include <stdio.h>
int main() {
    int N, triangle = 0;
    scanf("%d", &N);
    int val[N];
    for(int i = 0; i < N; i++) scanf("%d", &val[i]);
    for(int i = 0; i < N - 2; i++) {
        int a = val[i], b = val[i+1], c = val[i+2];
        if(a + b > c && a + c > b && b + c > a) triangle++;
    }
    printf("%d", triangle);
    return 0;
}