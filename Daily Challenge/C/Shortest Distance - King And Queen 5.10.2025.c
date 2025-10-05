#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    char m[n][n+1]; // each row as string
    int li[100], lj[100], lc = 0, f = 0, d = 0, l3[100], l3c = 0;

    for(int i = 0; i < n; i++)
        scanf("%s", m[i]);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            if(m[i][j] == 'K') { f = i; d = j; }
            if(m[i][j] == 'Q') { li[lc] = i; lj[lc++] = j; }
        }
    for(int z = 0; z < lc; z++) {
        int i = li[z], j = lj[z];
        if(abs(f - i) == 0) l3[l3c++] = abs(d - j);
        if(abs(d - j) == 0) l3[l3c++] = abs(f - i);
        if(abs(d - j) == abs(f - i)) l3[l3c++] = abs(f - i);
    }
    if(l3c == 0)
        printf("-1
");
    else {
        int min = l3[0];
        for(int i = 1; i < l3c; i++)
            if(l3[i] < min) min = l3[i];
        printf("%d
", min);
    }
    return 0;
}