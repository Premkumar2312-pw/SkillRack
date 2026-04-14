#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if(m <= 0) return 0;

    for(int i = m - 1; i < n; i += m)
        printf("%d ", arr[i]);

    return 0;
}