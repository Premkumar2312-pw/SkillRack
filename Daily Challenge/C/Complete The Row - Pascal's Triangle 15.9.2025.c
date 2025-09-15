#include <stdio.h>

void generate_row(long long row[], int r) {
    row[0] = 1;
    for (int k = 1; k <= r; k++)
        row[k] = row[k - 1] * (r - k + 1) / k;
}

int main() {
    int n;
    scanf("%d", &n);
    long long nums[n];
    for (int i = 0; i < n; i++) scanf("%lld", &nums[i]);

    long long row[100];
    for (int r = n - 1; r < 50; r++) {
        generate_row(row, r);
        int i = 0;
        for (int j = 0; j <= r; j++) {
            if (i < n && row[j] == nums[i]) i++;
        }
        if (i == n) {
            for (int j = 0; j <= r; j++)
                printf("%lld%c", row[j], j == r ? '\n' : ' ');
            break;
        }
    }
    return 0;
}
