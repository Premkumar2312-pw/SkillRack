#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* vowelEncryption(char *str) {
    static char result[201];
    int i = 0, j = 0, count = 0;
    while (str[i]) {
        if (strchr("AEIOUaeiou", str[i])) {
            count = 0;
            while (str[i] && strchr("AEIOUaeiou", str[i])) {
                count++;
                i++;
            }
            if (count >= 10) {
                sprintf(&result[j], "%d", count);
                j += strlen(&result[j]);
            } else {
                result[j++] = count + '0';
            }
        } else {
            result[j++] = str[i++];
        }
    }
    result[j] = '\0';
    return result;
}