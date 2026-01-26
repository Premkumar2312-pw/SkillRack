#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int rows = (n + 1) / 2;
    int mid = n / 2;
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < n; j++) {
            int val;
            scanf("%d", &val);

            if (i == 0 && j == mid) {
                sum += val;
            }
            else if (i == rows - 1 && val != 0) {
                sum += val;
            }
            else if (j == mid - i || j == mid + i) {
                sum += val;
            }
        }
    }

    printf("%d", sum);
    return 0;
}