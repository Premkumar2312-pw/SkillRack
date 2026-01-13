#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char line[1000];
    fgets(line, sizeof(line), stdin);

    char *tok = strtok(line, " ");
    int res = atoi(tok);

    while ((tok = strtok(NULL, " ")) != NULL) {
        char op[20];
        strcpy(op, tok);
        int val = atoi(strtok(NULL, " "));

        if (strcmp(op, "plus") == 0) res += val;
        else if (strcmp(op, "minus") == 0) res -= val;
        else if (strcmp(op, "multiply") == 0) res *= val;
        else if (strcmp(op, "divide") == 0) res /= val;
    }

    printf("%d", res);
    return 0;
}