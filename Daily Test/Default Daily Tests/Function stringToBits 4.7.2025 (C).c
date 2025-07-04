#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* stringToBits(char *str) {
    int len = strlen(str);
    char *res = (char*)malloc(len + 1);
    
    for (int i = 0; i < len; i++) {
        char ch = tolower(str[i]);
        int pos = ch - 'a' + 1;
        res[i] = (pos % 2 == 1) ? '1' : '0';
    }
    res[len] = '\0';
    return res;
}