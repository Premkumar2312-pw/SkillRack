#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    
    int **a = (int**)malloc(r * sizeof(int*));
    for(int i = 0; i < r; i++) {
        a[i] = (int*)malloc(c * sizeof(int));
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    int x, y;
    scanf("%d %d", &x, &y);
    int n = y-1, w = c-y+1;
    
    int *l = (int*)malloc(x * w * sizeof(int));
    int idx = 0;
    for(int i = 0; i < x; i++) {
        for(int j = n; j < n+w; j++) {
            l[idx++] = a[i][j];
        }
    }
    
    qsort(l, idx, sizeof(int), compare);
    
    idx = 0;
    for(int i = 0; i < x; i++) {
        for(int j = n; j < n+w; j++) {
            a[i][j] = l[idx++];
        }
    }
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("
");
    }
    
    for(int i = 0; i < r; i++) free(a[i]);
    free(a);
    free(l);
    return 0;
}