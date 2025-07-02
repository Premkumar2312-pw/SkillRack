#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n], i, eq = 1, asc = 1;

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 1; i < n; i++) {
        if(a[i] != a[0]) eq = 0;
        if(a[i] < a[i-1]) asc = 0;
    }

    if(eq)
        printf("Equal");
    else if(asc)
        printf("Ascending");
    else
        printf("Descending");

    return 0;
}