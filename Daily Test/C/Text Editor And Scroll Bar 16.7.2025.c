#include <stdio.h>
#include <string.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    char word[101], line[1001] = "", lines[100][1001];
    int lineCount = 0;

    while (scanf("%s", word) != EOF) {
        if (strlen(line) + strlen(word) + (strlen(line) > 0 ? 1 : 0) <= y) {
            if (strlen(line) > 0) strcat(line, " ");
            strcat(line, word);
        } else {
            strcpy(lines[lineCount++], line);
            strcpy(line, word);
        }
    }
    if (strlen(line) > 0)
        strcpy(lines[lineCount++], line);

    printf("%d\n", lineCount > x ? lineCount - x : 0);
    return 0;
}