#include <stdio.h>
int main() {
    int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    char s[20]; scanf("%s", s);
    int sec = 0, len = 0;
    while (s[len] != '\0') len++;
    int dir[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,0},{1,-1},{1,1}};
    for (int k = 1; k < len; k++) {
        int di, dj, x, y;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (m[i][j] == s[k]-'0') { di = i; dj = j; }
                if (m[i][j] == s[k-1]-'0') { x = i; y = j; }
            }
        }
        int f = 1;
        if (di == x && dj == y) continue;
        for (int d = 0; d < 8; d++) {
            if (di+dir[d][0]==x && dj+dir[d][1]==y) { sec++; f=0; }
        }
        if (f) sec += 2;
    }
    printf("%d", sec);
    return 0;
}