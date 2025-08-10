#include <string.h>

int stringToInteger(char *str) {
    char *words[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int len[] = {4,3,3,5,4,4,3,5,5,4};
    int num = 0, i = 0, d;
    while (str[i] != '\0') {
        for (d = 0; d < 10; d++) {
            if (strncmp(&str[i], words[d], len[d]) == 0) {
                num = num * 10 + d;
                i += len[d];
                break;
            }
        }
    }
    return num;
}