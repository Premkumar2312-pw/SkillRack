#include <stdio.h>
#include <string.h>

int main() {
    char words[1000][101];
    int count = 0;
    while (scanf("%s", words[count]) != EOF) {
        count++;
    }

    if (count == 1 && strchr(words[0], ' ')) {
        char *word = strtok(words[0], " ");
        char list[1000][101];
        count = 0;
        while (word) {
            strcpy(list[count++], word);
            word = strtok(NULL, " ");
        }
        for (int i = count - 1; i >= 0; i--) {
            printf("%s\n", list[i]);
        }
    } else {
        for (int i = count - 1; i >= 0; i--) {
            printf("%s ", words[i]);
        }
        printf("\n");
    }
    printf("%d\n", count);
    return 0;
}