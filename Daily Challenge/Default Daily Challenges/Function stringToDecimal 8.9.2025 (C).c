#include <stdio.h>
#include <string.h>

long long int stringToDecimal(char *str) {
    long long int x = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] % 2 == 1)
            x = x * 2 + 1;
        else
            x = x * 2;
    }
    return x;
}
