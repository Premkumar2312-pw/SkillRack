#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int nums[N];
    for (int i = 0; i < N; i++) scanf("%d", &nums[i]);
    int k;
    scanf("%d", &k);
    int mask = (1 << k) - 1;
    int sum = nums[0];
    int currLast = nums[0] & mask;
    for (int index = 1; index < N; index++) {
        if (currLast == (nums[index] & mask)) {
            sum += nums[index];
        } else {
            printf("%d ", sum);
            sum = nums[index];
            currLast = nums[index] & mask;
        }
    }
    printf("%d
", sum);
    return 0;
}