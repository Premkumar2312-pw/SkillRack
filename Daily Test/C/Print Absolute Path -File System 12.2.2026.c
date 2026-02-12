#include <stdio.h>
#include <string.h>

#define MAX 1000

int main() {
    char entries[MAX][MAX];
    char stack[MAX][MAX];
    char result[MAX][MAX];
    int entryCount = 0, resultCount = 0;

    while (fgets(entries[entryCount], MAX, stdin)) {
        entries[entryCount][strcspn(entries[entryCount], "\n")] = 0;
        entryCount++;
    }

    int stackSize = 0;

    for (int i = 0; i < entryCount; i++) {
        char *entry = entries[i];

        int level = 0;
        while (entry[level] == '\t')
            level++;

        char name[MAX];
        strcpy(name, entry + level);

        while (stackSize > level)
            stackSize--;

        strcpy(stack[stackSize++], name);

        if (strchr(name, '.') != NULL) {
            result[resultCount][0] = '\0';
            for (int j = 0; j < stackSize; j++) {
                strcat(result[resultCount], stack[j]);
                if (j != stackSize - 1)
                    strcat(result[resultCount], "/");
            }
            resultCount++;
        }
    }

    if (resultCount == 0)
        printf("-1");
    else
        for (int i = 0; i < resultCount; i++)
            printf("%s\n", result[i]);

    return 0;
}