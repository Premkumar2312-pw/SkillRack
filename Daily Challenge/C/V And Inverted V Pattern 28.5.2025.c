#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int a = strlen(s), b = (a + 1) / 2;
    char g[b][a];
    
    for(int i = 0; i < b; i++)
        for(int j = 0; j < a; j++)
            g[i][j] = '*';
    
    int i = 0, j = a - 1, k = b - 1, l = b - 1;
    int p = 0, q = 0, r = 0, u = 0, t = a - 1, v = b - 1, w = b - 1;

    for(int x = 0; x < b; x++) {
        for(int y = 0; y < a; y++) {
            if(x == p && y == q) g[x][y] = s[i++];
            if(x == r && y == t) g[x][y] = s[j--];
            if(x == u && y == v) g[x][y] = s[k--];
            if(x == u && y == w) g[x][y] = s[l++];
        }
        p++; q++;
        r++; t--;
        u++; v--; w++;
    }

    for(int i = 0; i < b; i++) {
        for(int j = 0; j < a; j++)
            printf("%c", g[i][j]);
        printf("\n");
    }
    return 0;
}