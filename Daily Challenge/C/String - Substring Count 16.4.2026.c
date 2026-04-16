#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], e[1000];
    scanf("%s", s);
    scanf("%s", e);

    int cnt = 0;
    int n = strlen(s);
    int m = strlen(e);

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(j - i + 1 == m) {
                int k;
                for(k = 0; k < m; k++) {
                    if(s[i + k] != e[k])
                        break;
                }
                if(k == m) cnt++;
            }
        }
    }

    printf("%d", cnt);
    return 0;
}