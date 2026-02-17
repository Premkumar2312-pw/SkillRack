#include <stdio.h>

#define MAX 100000

int keys[MAX];
int values[MAX];
int size = 0;

int find(int key) {
    for (int i = 0; i < size; i++) {
        if (keys[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        keys[size] = x;
        values[size] = x + y;
        size++;
    }

    int f = 0;

    for (int i = 0; i < size; i++) {
        int x = keys[i];
        int tar = values[i];

        int idx = find(tar);
        if (idx != -1 && values[idx] == x) {
            f = 1;
            break;
        }
    }

    if (f)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
