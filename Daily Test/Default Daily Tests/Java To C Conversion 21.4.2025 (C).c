#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[5005];
    while (fgets(line, sizeof(line), stdin)) {
        char *tok = strtok(line, " \t\n");
        char *last = NULL;
        while (tok != NULL) {
            last = tok;
            tok = strtok(NULL, " \t\n");
        }
        if (last != NULL) {
            printf("%s\n", last);
        }
    }
    return 0;
}