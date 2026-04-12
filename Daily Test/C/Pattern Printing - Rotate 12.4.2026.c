#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Fill array
    for(int i = 0; i < n; i++)
        arr[i] = i + 1;

    for(int i = 0; i < n; i++) {

        // Print
        for(int j = 0; j < n; j++)
            printf("%d ", arr[j]);
        printf("\n");

        // Right shift
        int last = arr[n - 1];
        for(int j = n - 1; j > 0; j--)
            arr[j] = arr[j - 1];
        arr[0] = last;
    }

    return 0;
}