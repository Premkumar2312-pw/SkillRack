#include <stdio.h>
#include <stdlib.h>

int toMin(char t[]) {
    int h, m;
    sscanf(t, "%d:%d", &h, &m);
    return h * 60 + m;
}

int cmp(const void *a, const void *b) {
    return ((int*)a)[0] - ((int*)b)[0];
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n][2];
    char s[6], e[6];

    for (int i = 0; i < n; i++) {
        scanf("%s %s", s, e);
        arr[i][0] = toMin(s);
        arr[i][1] = toMin(e);
    }

    qsort(arr, n, sizeof(arr[0]), cmp);

    int freeTime = 0, prevEnd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i][0] > prevEnd)
            freeTime += arr[i][0] - prevEnd;
        if (arr[i][1] > prevEnd)
            prevEnd = arr[i][1];
    }

    freeTime += 1440 - prevEnd;
    printf("%d", freeTime);
}