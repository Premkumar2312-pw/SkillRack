#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char a[100][100] = {"0", "1"};
    for (int i = 2; i < n; i++) {
        strcpy(a[i], a[i-2]);
        strcat(a[i], a[i-1]);
    }
    for (int i = 0; i < n; i++)
        printf("%s\n", a[i]);
    for (int i = n-2; i >= 0; i--)
        printf("%s\n", a[i]);
    return 0;
}