#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    char l[n][101];
    int r[n];
    for(int i = 0; i < n; i++)
        scanf("%s", l[i]);
    for(int k = 0; k < n; k++) {
        char *i = l[k];
        char minc = i[0], maxc = i[0];
        int len = strlen(i);
        for(int j = 1; j < len; j++) {
            if(i[j] < minc) minc = i[j];
            if(i[j] > maxc) maxc = i[j];
        }
        int a = minc - '0', b = maxc - '0';
        char c[20] = "";
        if(i[0] < i[len-1]) {
            for(int j = a; j <= b; j++)
                sprintf(c + strlen(c), "%d", j);
        } else {
            for(int j = b; j >= a; j--)
                sprintf(c + strlen(c), "%d", j);
        }
        r[k] = atoi(c);
    }
    // Sort r
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(r[i] > r[j]) {
                int tmp = r[i]; r[i] = r[j]; r[j] = tmp;
            }
    for(int i = 0; i < n; i++) printf("%d ", r[i]);
    return 0;
}