#include <stdio.h>
#include <ctype.h>
#include <string.h>

int getMass(char *sym) {
    if (strcmp(sym, "H") == 0) return 1;
    if (strcmp(sym, "He") == 0) return 4;
    if (strcmp(sym, "C") == 0) return 12;
    if (strcmp(sym, "N") == 0) return 14;
    if (strcmp(sym, "O") == 0) return 16;
    if (strcmp(sym, "Mg") == 0) return 24;
    if (strcmp(sym, "S") == 0) return 32;
    if (strcmp(sym, "Ca") == 0) return 40;
    if (strcmp(sym, "Cu") == 0) return 63;
    return 0;
}

int main() {
    char s[100];
    scanf("%s", s);

    int i = 0, total = 0;

    while (s[i] != '\0') {

        char sym[3] = {s[i], '\0'};
        i++;

        if (islower(s[i])) {
            sym[1] = s[i];
            sym[2] = '\0';
            i++;
        }

        int cnt = 0;
        while (isdigit(s[i])) {
            cnt = cnt * 10 + (s[i] - '0');
            i++;
        }
        if (cnt == 0) cnt = 1;

        total += getMass(sym) * cnt;
    }

    printf("%d", total);
}