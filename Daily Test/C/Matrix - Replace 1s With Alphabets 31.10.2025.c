#include <stdio.h>
#include <ctype.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    char m[r][c][10]; // Support for multi-char input cells
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%s", m[i][j]);
        }
    }
    char k[2];
    scanf("%s", k);
    int a, idx;
    if(isupper(k[0])) {
        a = 65;
        idx = k[0] - 'A';
    } else {
        a = 97;
        idx = k[0] - 'a';
    }
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(strcmp(m[i][j], "1") == 0) {
                int ch = a + (idx % 26);
                m[i][j][0] = ch;
                m[i][j][1] = '';
                idx++;
            }
        }
    }
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%s%c", m[i][j], (j == c-1) ? '
' : ' ');
        }
    }
    return 0;
}