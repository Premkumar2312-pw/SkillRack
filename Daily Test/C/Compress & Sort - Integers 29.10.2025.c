#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char str[20]; // assuming max 20 digits in input numbers
    int l1[100];  // assuming max 100 numbers
    int count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        int len = strlen(str);
        int min_val = -1;
        for (int j = 0; j < len; j++) {
            char temp[20];
            int k = 0;
            for (int x = 0; x < len; x++) {
                if (x != j) temp[k++] = str[x];
            }
            temp[k] = '';
            int val = atoi(temp);
            if (min_val == -1 || val < min_val)
                min_val = val;
        }
        l1[count++] = min_val;
    }

    // Sort l1 array
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (l1[i] > l1[j]) {
                int temp = l1[i];
                l1[i] = l1[j];
                l1[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", l1[i]);
    }
    printf("
");

    return 0;
}