#include <ctype.h>
#include <string.h>

int customCompare(char str1[], char str2[])
{
    char upper1[1000], upper2[1000];
    int i, j = 0, k = 0;

    for(i = 0; str1[i] != '\0'; i++) {
        if(isupper(str1[i])) {
            upper1[j++] = str1[i];
        }
    }
    upper1[j] = '\0';

    for(i = 0; str2[i] != '\0'; i++) {
        if(isupper(str2[i])) {
            upper2[k++] = str2[i];
        }
    }
    upper2[k] = '\0';

    if(strcmp(upper1, upper2) == 0)
        return 1;
    else
        return 0;
}