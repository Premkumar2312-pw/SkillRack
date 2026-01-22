#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, y, L, cnt = 0;
    int arr[1000][1000] = {0};

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        arr[x][y] = 1;
    }

    scanf("%d", &L);

    for(int i = 0; i < 1000; i++)
        for(int j = 0; j + L < 1000; j++)
            if(arr[i][j] && arr[i][j + L])
                cnt++;

    printf("%d", cnt);
    return 0;
}