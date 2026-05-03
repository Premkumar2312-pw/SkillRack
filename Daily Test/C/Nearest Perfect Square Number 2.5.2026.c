#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int root = (int)sqrt(n);
    int lower = root * root;
    int upper = (root + 1) * (root + 1);

    if (n - lower <= upper - n)
        printf("%d", lower);
    else
        printf("%d", upper);

    return 0;
}
