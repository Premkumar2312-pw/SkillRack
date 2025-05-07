#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Structure to hold words
typedef struct {
    char *words[1000];
    int count;
} WordList;

// Function to compare characters for sorting
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    char input[10000];
    scanf("%[^\n]s", input);

    char *token = strtok(input, " ");
    WordList lists[256] = {0};
    char keys[256];
    int key_count = 0;

    while (token) {
        char last = token[strlen(token) - 1];
        if (lists[(int)last].count == 0) {
            keys[key_count++] = last;
        }
        lists[(int)last].words[lists[(int)last].count++] = token;
        token = strtok(NULL, " ");
    }

    qsort(keys, key_count, sizeof(char), compare);

    for (int i = 0; i < key_count; i++) {
        int index = (int)keys[i];
        for (int j = 0; j < lists[index].count; j++) {
            printf("%s ", lists[index].words[j]);
        }
        printf("\n");
    }

    return 0;
}