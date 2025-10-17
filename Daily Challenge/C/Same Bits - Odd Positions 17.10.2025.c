#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void toBinary(int n, char *bin) {
    int i = 0, j;
    char temp[32];
    while(n > 0) {
        temp[i++] = '0' + (n % 2);
        n /= 2;
    }
    if(i == 0) temp[i++] = '0';
    for(j = 0; j < i; j++)
        bin[j] = temp[i-j-1];
    bin[j] = '';
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    char c[33], d[33];
    toBinary(a, c);
    toBinary(b, d);
    
    int len_c = strlen(c), len_d = strlen(d), maxi = len_c > len_d ? len_c : len_d;
    char rc[33], rd[33];
    memset(rc, '0', maxi); rc[maxi] = '';
    memset(rd, '0', maxi); rd[maxi] = '';
    strcpy(rc + maxi - len_c, c);
    strcpy(rd + maxi - len_d, d);
    
    char ans[33];
    int idx = 0;
    for(int i = maxi - 1; i >= 0; i -=2) {
        if(rc[i] == rd[i]) ans[idx++] = rc[i];
    }
    ans[idx] = '';
    if(idx == 0) printf("-1
");
    else {
        int res = 0;
        for(int i = 0; i < idx; i++)
            res = res * 2 + (ans[idx - 1 - i] - '0');
        printf("%d
", res);
    }
    return 0;
}