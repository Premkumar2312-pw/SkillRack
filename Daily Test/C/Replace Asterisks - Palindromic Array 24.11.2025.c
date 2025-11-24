#include <stdio.h>
#include <string.h>

int main() {
    int n, f = 0;
    scanf("%d", &n);
    char a[n][11], b[n][11];
    for(int i = 0; i < n; i++) {
        scanf("%s", a[i]);
        strcpy(b[i], a[n-1-i]);
    }
    if(strcmp(a[0], "*") == 0) f = 1;

    for(int i = 0; i < n; i++) {
        if(strcmp(a[i], "*") == 0) {
            if(strcmp(b[i], "*") != 0) strcpy(a[i], b[i]);
            else strcpy(a[i], "1");
        } else if(f == 1 && strcmp(a[i], "*") == 0) {
            strcpy(a[i], "1");
        }
    }
    int is_pal = 1;
    for(int i = 0; i < n; i++)
        if(strcmp(a[i], a[n-1-i]) != 0)
            is_pal = 0;
    if(is_pal)
        for(int i = 0; i < n; i++) printf("%s ", a[i]);
    else
        printf("-1");
    return 0;
}