#include <ctype.h>

boundedArray* getWordsStartingWithVowel(char str[])
{
    boundedArray* result = (boundedArray*)malloc(sizeof(boundedArray));
    result->words = (char**)malloc(sizeof(char*) * 100);
    result->SIZE = 0;

    char *token = strtok(str, " ");
    while (token != NULL)
    {
        char ch = tolower(token[0]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            result->words[result->SIZE] = (char*)malloc(strlen(token) + 1);
            strcpy(result->words[result->SIZE], token);
            result->SIZE++;
        }
        token = strtok(NULL, " ");
    }

    if (result->SIZE == 0)
    {
        result->words[0] = (char*)malloc(3);
        strcpy(result->words[0], "-1");
        result->SIZE = 1;
    }

    return result;
}