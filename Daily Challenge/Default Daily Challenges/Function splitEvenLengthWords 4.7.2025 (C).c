#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* splitEvenLengthWords(char *str) {
    char *r = malloc(100000);
    r[0] = '\0';
    
    char *t = strtok(str, " ");
    while(t != NULL) {
        int l = strlen(t);
        if (l % 2 == 0) {
            int m = l / 2;
            strncat(r, t, m);
            strcat(r, " ");
            strcat(r, t + m);
        } else {
            strcat(r, t);
        }
        strcat(r, " ");
        t = strtok(NULL, " ");
    }
    
    int sl = strlen(r);
    if (sl > 0 && r[sl - 1] == ' ')
        r[sl - 1] = '\0';
    
    return r;
}