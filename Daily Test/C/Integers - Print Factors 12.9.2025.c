#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void fact(int n) {
    int tmp[1000], cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            printf("%d ", i);
            if (i != n / i) tmp[cnt++] = n / i;
        }
    }
    for (int i = cnt - 1; i >= 0; i--) printf("%d ", tmp[i]);
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    char arr[N][50];
    for (int i = 0; i < N; i++) scanf("%s", arr[i]);

    for (int i = 0; i < N; i += K) {
        if (i + K <= N) {
            char s[60] = "";
            for (int j = i; j < i + K; j++) {
                int len = strlen(arr[j]);
                char c[2] = {arr[j][len - 1], '\0'};
                strcat(s, c);
            }
            int a = atoi(s);
            if (a == 0) printf("0\n");
            else { fact(a); printf("\n"); }
        }
    }
    return 0;
}