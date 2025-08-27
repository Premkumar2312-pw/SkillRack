#include <stdio.h>
#define MAX 100
int main() {
    int N, val[MAX], jar[MAX], lid[MAX];
    int j = 0, l = 0, cnt = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) scanf("%d", &val[i]);
    for (int i = 0; i < N; i++) {
        if (val[i] % 2 == 0)
            jar[j++] = val[i];
        else
            lid[l++] = val[i];
    }
    for (int i = 0; i < j; i++) {
        for (int k = 0; k < l; k++) {
            if (jar[i] + 1 == lid[k]) {
                cnt++;
                for (int m = k; m < l - 1; m++)
                    lid[m] = lid[m + 1];
                l--;
                break;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
