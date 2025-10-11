#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100
#define LEN 101

typedef struct {
    char ch;
    int count;
} CharCount;

int findIndex(CharCount arr[], int size, char ch) {
    for(int i = 0; i < size; i++) {
        if(arr[i].ch == ch) return i;
    }
    return -1;
}

int main() {
    int N, size = 0;
    scanf("%d", &N);
    char val[MAX][LEN];
    CharCount counts[256] = {0};

    for (int i = 0; i < N; i++) {
        scanf("%s", val[i]);
        int idx = findIndex(counts, size, val[i][0]);
        if(idx >= 0) counts[idx].count++;
        else { counts[size].ch = val[i][0]; counts[size++].count = 1; }

        int last = strlen(val[i]) - 1;
        idx = findIndex(counts, size, val[i][last]);
        if(idx >= 0) counts[idx].count++;
        else { counts[size].ch = val[i][last]; counts[size++].count = 1; }
    }

    // Sort based on count (descending)
    for(int i = 0; i < size-1; i++) {
        for(int j = i+1; j < size; j++) {
            if(counts[j].count > counts[i].count) {
                CharCount tmp = counts[i];
                counts[i] = counts[j];
                counts[j] = tmp;
            }
        }
    }
    char key = counts[0].ch;

    for (int i = 0; i < N; i++) {
        if(val[i][0] == key)
            printf("%s
", val[i]);
        else {
            // print reversed
            int L = strlen(val[i]);
            for(int j = L-1; j >= 0; j--)
                putchar(val[i][j]);
            putchar('
');
        }
    }
    return 0;
}