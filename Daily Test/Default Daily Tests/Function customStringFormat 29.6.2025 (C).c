#include <string.h>
#include <ctype.h>

void customStringFormat(char *str1, char *str2) {
    char *w[100]; int c = 0;
    for (char *t = strtok(str2, " "); t; t = strtok(NULL, " "))
        w[++c] = t;

    for (int i = 0; str1[i]; ) {
        if (str1[i] == '{') {
            int n = 0;
            while (isdigit(str1[++i])) n = n * 10 + (str1[i] - '0');
            while (str1[i] && str1[i] != '}') i++;
            if (str1[i] == '}') i++;
            printf("%s", w[n]);
        } else putchar(str1[i++]);
    }
}