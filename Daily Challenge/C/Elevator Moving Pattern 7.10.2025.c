#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, l[101], c = 0, d = 0;
    char l1[101][101] = {0};
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &l[i]);
    for(int i=0; i<n; i++) {
        if(i == 0) {
            memset(l1[i], '*', l[i]);
            l1[i][l[i]] = '';
            c += l[i];
        } else if(l[i] > 0) {
            memset(l1[i], '.', c);
            memset(l1[i] + c, '*', l[i]);
            l1[i][c + l[i]] = '';
            c += l[i];
        } else {
            c += l[i];
            memset(l1[i], '.', c-1);
            memset(l1[i] + (c-1), '*', -l[i]);
            l1[i][c-1+(-l[i])] = '';
        }
    }
    // Find max length (d)
    for(int i=0; i<n; i++) {
        int len = strlen(l1[i]);
        if(len > d) d = len;
    }
    // Padding
    for(int i=0; i<n; i++) {
        int pad = d - strlen(l1[i]);
        while(pad-- > 0) strcat(l1[i], "-");
    }
    // Reverse traverse and print
    for(int i=d-1; i>=0; i--) {
        for(int j=0; j<n; j++)
            putchar(l1[j][i]);
        putchar('
');
    }
    return 0;
}