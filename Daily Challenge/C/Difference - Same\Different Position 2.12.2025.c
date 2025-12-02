#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];   // copy
    }
    
    qsort(b, n, sizeof(int), cmp); // sort
    
    int X = 0, Y = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) X += a[i];
        else Y += a[i];
    }
    
    int diff = X - Y;
    if (diff < 0) diff = -diff;
    
    printf("%d", diff);
    return 0;
}