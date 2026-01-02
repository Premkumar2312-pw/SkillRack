#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int l[100], size = n;
    for (int i = 0; i < n; i++)
        scanf("%d", &l[i]);

    while (1) {
        for (int i = 0; i < size; i++)
            l[i] /= 2;

        for (int i = 0; i < size; i++)
            printf("%d ", l[i]);
        printf("\n");

        int j = 0;
        while (j < size) {
            if (l[j] % 2 == 1) {
                for (int k = j; k < size - 1; k++)
                    l[k] = l[k + 1];
                size--;
            } else {
                j++;
            }
        }

        if (size == 0)
            break;
    }
    return 0;
}