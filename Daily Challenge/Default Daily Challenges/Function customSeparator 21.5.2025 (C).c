#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* customSeparator(int N, char words[N][101], char sep)
{
    int maxLen = (100 * N) + (N - 1) + 1;
    char *result = (char *)malloc(maxLen);
    result[0] = '\0';

    for (int i = 0; i < N; i++) {
        strcat(result, words[i]);
        if (i != N - 1) {
            int len = strlen(result);
            result[len] = sep;
            result[len + 1] = '\0';
        }
    }

    return result;
}