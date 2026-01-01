#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int l[1000];
    int size = n;
    for (int i = 0; i < n; i++) scanf("%d", &l[i]);

    while (1) {
        int i = 0;
        int s = size;

        while (i < size) {
            if (l[i] > s) {
                l[i] -= s;
                i++;
            } else {
                for (int j = i; j < size-1; j++)
                    l[j] = l[j+1];
                size--;
            }
        }
        if (size == 0) break;
    }

    for (int i = 0; i < size; i++)
        printf("%d ", l[i]);

    return 0;
}