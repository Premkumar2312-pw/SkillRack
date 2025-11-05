#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int base_from_str(char *s) {
    char max_digit = '0';
    for (int i = 0; s[i]; i++)
        if (s[i] > max_digit) max_digit = s[i];
    return (max_digit - '0') + 1;
}

int base_strtol(char *s, int base) {
    return (int)strtol(s, NULL, base);
}

int main() {
    int n; scanf("%d", &n);
    char nums[n][50];
    int d[20] = {0};
    int used[20] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%s", nums[i]);
        int base = base_from_str(nums[i]);
        d[base] += base_strtol(nums[i], base);
        used[base] = 1;
    }
    // Print sorted values
    for (int i = 2; i < 20; i++)
        if (used[i]) printf("%d ", d[i]);
    return 0;
}