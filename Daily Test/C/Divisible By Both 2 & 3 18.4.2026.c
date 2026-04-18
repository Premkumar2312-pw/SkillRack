#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        if(x % 6 == 0) {
            printf("%d ", x);
        }
    }

    return 0;
}