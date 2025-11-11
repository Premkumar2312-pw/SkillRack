#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void replace_chars(char* str) {
    for (int i = 0; str[i]; ++i) {
        if (str[i] == '+') str[i] = '_';
        else if (str[i] == '-') str[i] = '+';
    }
    for (int i = 0; str[i]; ++i) {
        if (str[i] == '_') str[i] = '-';
    }
}

int main() {
    char b[256], c[256], d[256];
    fgets(b, sizeof(b), stdin); b[strcspn(b, "
")] = 0;
    fgets(c, sizeof(c), stdin); c[strcspn(c, "
")] = 0;
    strcpy(d, b);
    replace_chars(d);
    printf("%s
", d);

    // Very basic mathematical evaluator for format like: "2x+3"
    int res = 0, i = 0;
    int xval = atoi(c);

    while (d[i]) {
        if (isdigit(d[i])) {
            int coeff = d[i] - '0';
            i++;
            if (d[i] == 'x') {
                res += coeff * xval;
                i++;
            } else {
                res += coeff;
            }
        } else if (d[i] == '+') {
            i++;
        } else if (d[i] == '-') {
            i++;
            if (isdigit(d[i])) {
                int coeff = d[i] - '0';
                i++;
                if (d[i] == 'x') {
                    res -= coeff * xval;
                    i++;
                } else {
                    res -= coeff;
                }
            }
        } else {
            i++;
        }
    }
    printf("%d
", res);
    return 0;
}