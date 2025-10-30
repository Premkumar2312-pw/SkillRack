#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void to_binary(int n, char* buf) {
    int i = 0;
    for (int bit = 31; bit >= 0; bit--) {
        buf[i++] = ((n >> bit) & 1) + '0';
    }
    buf[i] = '';
    // Remove leading zeros
    int start = 0;
    while (buf[start] == '0' && start < 31) start++;
    memmove(buf, buf + start, strlen(buf + start) + 1);
}

int main() {
    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        char bin[33];
        to_binary(arr[i], bin);

        if (strlen(bin) < 2) {
            // If binary length less than 2, cannot do slice as in python,
            // Just print original number
            printf("%d ", arr[i]);
            continue;
        }

        // Create new string: bin[i][3:] + bin[i][2]
        // bin[i][3:] means from index 3 to end (0-based)
        // bin[i][2] is the character at index 2

        // If length < 4, bin[3:] is empty, just print bin[2]
        int len = strlen(bin);
        char newbin[33];
        int idx = 0;
        if (len > 3) {
            strcpy(newbin, &bin[3]);
            idx = strlen(newbin);
        } else {
            newbin[0] = '';
            idx = 0;
        }
        newbin[idx] = bin[2];
        newbin[idx+1] = '';

        // Convert newbin to int base 2
        int val = 0;
        for (int j = 0; newbin[j]; j++) {
            val = val * 2 + (newbin[j] - '0');
        }
        printf("%d ", val);
    }
    free(arr);
    return 0;
}