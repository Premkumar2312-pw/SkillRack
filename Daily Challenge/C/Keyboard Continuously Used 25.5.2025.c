#include <stdio.h>
#include <string.h>
int in(char ch, char *row) {
    for(int i = 0; row[i]; i++)
        if(row[i] == ch) return 1;
    return 0;
}
int main() {
    char a[101], b[101], c[101], s[10001];
    scanf("%s%s%s%s", a, b, c, s);
    int ml[3] = {0}, cr = -1, count = 0;
    for(int i = 0; s[i]; i++) {
        char ch = s[i];
        int found = 0;
        for(int j = 0; j < 3; j++) {
            char *row = j == 0 ? a : j == 1 ? b : c;
            if(in(ch, row)) {
                count = (cr == j) ? count + 1 : 1;
                cr = j;
                if(count > ml[j]) ml[j] = count;
                found = 1;
                break;
            }
        }
        if(!found) {
            cr = -1;
            count = 0;
        }
    }
    int m = ml[0] > ml[1] ? (ml[0] > ml[2] ? ml[0] : ml[2]) : (ml[1] > ml[2] ? ml[1] : ml[2]);
    if(m < 2) printf("-1\n");
    else {
        if(ml[0] == m) puts(a);
        if(ml[1] == m) puts(b);
        if(ml[2] == m) puts(c);
    }
    return 0;
}