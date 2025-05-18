#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char a[n][101], temp[101];
    int count[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%s", a[i]);
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j <= i; j++) {
            if (strcmp(a[i], a[j]) == 0) {
                freq++;
            }
        }
        if (freq == 1)
            printf("%s\n", a[i]);
        else
            printf("%s%d\n", a[i], freq);
    }

    return 0;
}