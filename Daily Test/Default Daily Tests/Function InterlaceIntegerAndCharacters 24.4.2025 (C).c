#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* interlaceIntegerAndCharacter(int N, int *arr, char *str)
{
    char *result = (char *)malloc(11 * N + 1);
    result[0] = '\0';
    char buffer[12];
    for (int i = 0; i < N; i++)
    {
        sprintf(buffer, "%d%c", arr[i], str[i]);
        strcat(result, buffer);
    }
    return result;
}