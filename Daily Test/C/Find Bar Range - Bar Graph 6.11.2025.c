#include <stdio.h>
#include <string.h>
#define MAXN 100
#define MAXL 101

int main() {
    int n;
    char l[MAXN][MAXL];
    scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++)
        fgets(l[i], MAXL, stdin);
    // Remove newline characters if any
    for (int i=0; i<n; i++) {
        int len = strlen(l[i]);
        while (len > 0 && (l[i][len-1]=='
' || l[i][len-1]=='
')) l[i][--len]=0;
    }
    // Reverse rows to l_rev
    char l_rev[MAXN][MAXL];
    for (int i = 0; i < n; i++)
        strcpy(l_rev[i], l[n-1-i]);
    int cols = strlen(l_rev[0]);
    for (int i = 0; i < cols; i++) {
        int b = 0, c = 0, f = 0;
        for (int j = 0; j < n; j++) {
            if (l_rev[j][i] == '#' && f == 0) { b = j; f = 1; c = j; }
            else if (f == 1 && l_rev[j][i] == '#') c = j;
        }
        printf("%d %d
", b + 1, c + 1);
    }
    return 0;
}