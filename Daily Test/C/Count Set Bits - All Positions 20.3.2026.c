#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    char b[n][64];
    int le = 0;

    for(int i = 0; i < n; i++) {
        int x = arr[i], idx = 0;
        char temp[64];

        while(x > 0) {
            temp[idx++] = (x % 2) + '0';
            x /= 2;
        }

        le = max(le, idx);

        for(int j = 0; j < idx; j++) {
            b[i][j] = temp[idx - j - 1];
        }
        b[i][idx] = '\0';
    }

    int lsb = -1;

    while(le >= -lsb) {
        int ans = 0;

        for(int i = 0; i < n; i++) {
            int len = strlen(b[i]);
            if(len >= -lsb) {
                if(b[i][len + lsb] == '1') {
                    ans++;
                }
            }
        }

        lsb--;
        printf("%d ", ans);
    }

    return 0;
}