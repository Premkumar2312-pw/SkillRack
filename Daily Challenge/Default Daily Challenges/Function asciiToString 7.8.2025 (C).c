#include <stdlib.h>

char* asciiToString(int SIZE, int *arr)
{
    char *res = (char*)malloc((SIZE+1)*sizeof(char));
    for(int i=0;i<SIZE;i++) res[i] = (char)arr[i];
    res[SIZE] = '\0';
    return res;
}