#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        char m = s[i];
        int cnt = 0;
        for (int j = i; j < n; j++) {
            if (s[j] == m) cnt++;
        }
        printf("%c%d ", m, cnt);
    }
    return 0;
}