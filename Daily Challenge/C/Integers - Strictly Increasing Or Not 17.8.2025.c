#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct {
    char ch;
    int num;
} Pair;

int cmp(const void *a, const void *b) {
    Pair *p1 = (Pair*)a;
    Pair *p2 = (Pair*)b;
    return p1->ch - p2->ch;
}

int main() {
    int N;
    scanf("%d", &N);
    Pair arr[N];
    for (int i = 0; i < N; i++) {
        char s[100];
        scanf("%s", s);
        int len = strlen(s);
        arr[i].num = atoi(s);
        arr[i].ch = tolower(s[len-1]);
    }
    qsort(arr, N, sizeof(Pair), cmp);
    int ok = 1;
    for (int i = 0; i < N-1; i++) {
        if (arr[i].num >= arr[i+1].num) {
            ok = 0;
            break;
        }
    }
    printf(ok ? "Yes\n" : "No\n");
    return 0;
}