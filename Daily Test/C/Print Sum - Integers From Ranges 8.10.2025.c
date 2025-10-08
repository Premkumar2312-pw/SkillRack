#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);
    char s[1001];
    int l1[100][2];
    for(int a = 0; a < n; a++) {
        scanf("%s", s);
        int c = -1, d = -1;
        int f = 0;
        for(int i = 0; s[i]; i++) {
            if (isdigit(s[i])) {
                if (f == 0) { c = s[i] - '0'; f = 1; }
                else d = s[i] - '0';
            }
        }
        l1[a][0] = c;
        l1[a][1] = d;
    }
    int sum = 0;
    for(int a = 0; a < n; a++) {
        int j = l1[a][0], k = l1[a][1], val = 0;
        if(j < k) {
            for(int i = j; i <= k; i++)
                val = val*10 + i;
        } else {
            for(int i = j; i >= k; i--)
                val = val*10 + i;
        }
        sum += val;
    }
    printf("%d
", sum);
    return 0;
}