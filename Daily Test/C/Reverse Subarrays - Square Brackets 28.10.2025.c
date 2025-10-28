#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char n[1000], p[100] = "";
    int l[1000], lsize = 0, i = 0;
    fgets(n, sizeof(n), stdin);

    while (i < strlen(n)) {
        if (n[i] == '[') {
            int l1[100], l1size = 0;
            ++i;
            while (n[i] != ']' && n[i] != '') {
                if (isdigit(n[i])) {
                    int plen = strlen(p);
                    p[plen] = n[i];
                    p[plen+1] = '';
                } else if (n[i] == ' ') {
                    if(strlen(p) > 0) {
                        l1[l1size++] = atoi(p);
                        p[0] = '';
                    }
                }
                ++i;
            }
            if (strlen(p) > 0) {
                l1[l1size++] = atoi(p);
                p[0] = '';
            }
            for (int j = l1size - 1; j >= 0; --j) {
                l[lsize++] = l1[j];
            }
        } else if (isdigit(n[i])) {
            int plen = strlen(p);
            p[plen] = n[i];
            p[plen+1] = '';
        } else if (n[i] == ' ') {
            if(strlen(p) > 0) {
                l[lsize++] = atoi(p);
                p[0] = '';
            }
        }
        ++i;
    }
    if(strlen(p) > 0) {
        l[lsize++] = atoi(p);
    }
    int sum = 0;
    for (int k = 0; k < lsize; ++k) {
        printf("%d ", l[k]);
        sum += l[k];
    }
    printf("
%d
", sum);
    return 0;
}