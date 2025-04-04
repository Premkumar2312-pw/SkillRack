#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    int pos;
    char ch[10];
} Pair;

int cmp(const void *a, const void *b) {
    return ((Pair *)a)->pos - ((Pair *)b)->pos;
}

int main() {
    char s[200], *tok;
    Pair arr[100];
    int n = 0;
    
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;

    tok = strtok(s, "-");
    while (tok) {
        int i = 0, pos = 0;
        char ch[10] = "";
        while (tok[i]) {
            if (isdigit(tok[i])) pos = pos * 10 + (tok[i] - '0');
            else strncat(ch, &tok[i], 1);
            i++;
        }
        arr[n].pos = pos;
        strcpy(arr[n++].ch, ch);
        tok = strtok(NULL, "-");
    }

    qsort(arr, n, sizeof(Pair), cmp);

    for (int i = 0; i < n; i++) printf("%s", arr[i].ch);
    return 0;
}