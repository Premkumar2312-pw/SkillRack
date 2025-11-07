#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s);
    int len = strlen(s);
    for(int idx = 0; idx < len; idx++) {
        char i = s[idx];
        int b = -1;
        for(int k = idx+1; k < len; k++) {
            if(s[k] == i) {
                b = k;
                break;
            }
        }
        if(b != -1) {
            for(int j = idx; j <= b; j++) putchar(s[j]);
            putchar('
');
        } else {
            break;
        }
    }
    return 0;
}