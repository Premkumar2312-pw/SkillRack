#include <stdio.h>
#include <limits.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int ans = INT_MAX;

    for (int i = 0; i <= n - k; i++) {
        int m = arr[i];
        for (int j = i; j < i + k; j++) {
            if (arr[j] > m)
                m = arr[j];
        }
        if (m < ans)
            ans = m;
    }

    printf("%d", ans);
    return 0;
}