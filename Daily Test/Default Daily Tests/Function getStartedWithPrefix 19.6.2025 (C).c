#include <string.h>
#include <stdlib.h>

boundedArray* getWordsStartingWithPrefix(char *str, char *prefix) {
    boundedArray *bArr = (boundedArray*)malloc(sizeof(boundedArray));
    bArr->words = (char**)malloc(1000 * sizeof(char*));
    bArr->SIZE = 0;

    char *w = strtok(str, " ");
    int pLen = strlen(prefix);

    while (w != NULL) {
        if (strncmp(w, prefix, pLen) == 0) {
            bArr->words[bArr->SIZE] = (char*)malloc((strlen(w) + 1) * sizeof(char));
            strcpy(bArr->words[bArr->SIZE], w);
            bArr->SIZE++;
        }
        w = strtok(NULL, " ");
    }

    if (bArr->SIZE == 0) {
        bArr->words[0] = (char*)malloc(3 * sizeof(char));
        strcpy(bArr->words[0], "-1");
        bArr->SIZE = 1;
    }

    return bArr;
}