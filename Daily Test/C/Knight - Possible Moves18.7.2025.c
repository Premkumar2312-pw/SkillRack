#include <stdio.h>
int main() {
    char b[8][3];
    int i, j, x, y, c = 0;
    for(i = 0; i < 8; i++)
        for(j = 0; j < 8; j++)
            scanf("%s", b[i][j]), b[i][j] == 'H' ? (x = i, y = j) : 0;
    int m[8][2] = {{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1}};
    for(i = 0; i < 8; i++) {
        int nx = x + m[i][0], ny = y + m[i][1];
        if(nx >= 0 && nx < 8 && ny >= 0 && ny < 8) c++;
    }
    printf("%d", c);
    return 0;
}