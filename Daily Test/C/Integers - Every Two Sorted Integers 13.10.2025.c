#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int val[N], copy[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &val[i]);
        copy[i] = val[i];
    }

    // Sorting copy[]
    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            if (copy[i] > copy[j]) {
                int temp = copy[i];
                copy[i] = copy[j];
                copy[j] = temp;
            }
        }
    }

    for (int i = 0; i < N-1; i++) {
        int idx1 = -1, idx2 = -1;
        for (int k = 0; k < N; k++) {
            if (val[k] == copy[i]) idx1 = k;
            if (val[k] == copy[i+1]) idx2 = k;
        }
        if (idx1 < idx2) {
            for (int j = idx1; j <= idx2; j++)
                printf("%d ", val[j]);
        } else {
            for (int j = idx1; j >= idx2; j--)
                printf("%d ", val[j]);
        }
    }
    printf("
");
    return 0;
}