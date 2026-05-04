#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &m);

    int ans = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] < m && arr[i] > ans) {
            ans = arr[i];
        }
    }

    printf("%d", ans);
    return 0;
}