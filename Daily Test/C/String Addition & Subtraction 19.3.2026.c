#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000] = "", ch;
    int f[26] = {0}, i, j = 0;
    char op = '+';

    scanf("%s", s);
    int len = strlen(s);

    for(i = 0; i <= len; i++) {
        ch = (i == len) ? '#' : s[i];

        if(ch == '+' || ch == '-' || ch == '#') {
            for(int k = 0; k < j; k++) {
                int idx = t[k] - 'a';
                if(op == '+') f[idx]++;
                else f[idx]--;
            }
            op = ch;
            j = 0;
        } else {
            t[j++] = ch;
        }
    }

    for(i = 0; i < 26; i++) {
        if(f[i] > 0) {
            for(int k = 0; k < f[i]; k++)
                printf("%c", i + 'a');
        }
    }

    int negPrinted = 0;
    for(i = 0; i < 26; i++) {
        if(f[i] < 0) {
            if(!negPrinted) {
                printf("-");
                negPrinted = 1;
            }
            for(int k = 0; k < -f[i]; k++)
                printf("%c", i + 'a');
        }
    }

    return 0;
}