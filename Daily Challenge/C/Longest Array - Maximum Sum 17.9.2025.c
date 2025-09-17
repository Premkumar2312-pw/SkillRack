#include <stdio.h>
int main() {
    int n, m = 0, j = 0, len, s, maxsum, t;
    scanf("%d", &n);
    int arr[100][100], lens[100], k;
    for(int i = 0; i < n; i++) {
        scanf("%d", &len);
        lens[i] = len;
        for(int x = 0; x < len; x++) scanf("%d", &arr[i][x]);
        if(m < len) { m = len; j = i; }
        else if(m == len) {
            s = 0; maxsum = 0;
            for(k = 0; k < lens[j]; k++) s += arr[j][k];
            for(k = 0; k < len; k++) maxsum += arr[i][k];
            if(s < maxsum) j = i;
        }
    }
    s = 0;
    for(int k = 0; k < lens[j]; k++) s += arr[j][k];
    printf("%d
", s);
    return 0;
}