#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    int rows = 0, cols = -1, count, temp;

    while (fgets(line, sizeof(line), stdin)) {
        char *p = strtok(line, " \n");
        count = 0;
        while (p) {
            sscanf(p, "%d", &temp);
            count++;
            p = strtok(NULL, " \n");
        }

        if (cols == -1) {
            cols = count;
            rows = 1;
        } else if (count == cols) {
            rows++;
        } else {
            printf("%d %d\n", rows, cols);
            cols = count;
            rows = 1;
        }
    }
    printf("%d %d\n", rows, cols);
    return 0;
}