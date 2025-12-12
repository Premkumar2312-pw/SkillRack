#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        int x = arr[i];
        int sum = 0, prod = 1;

        while(x > 0) {
            int d = x % 10;
            sum += d;
            prod *= d;
            x /= 10;
        }
        printf("%d ", sum > prod ? sum : prod);
    }
    return 0;
}