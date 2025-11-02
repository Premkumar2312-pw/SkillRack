#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buffer[100];
    char **l = NULL;
    int capacity = 0, size = 0;

    // Read input until EOF
    while (fgets(buffer, sizeof(buffer), stdin)) {
        // Remove trailing newline
        buffer[strcspn(buffer, "
")] = 0;

        // Resize array if needed
        if (size == capacity) {
            capacity = capacity == 0 ? 10 : capacity * 2;
            l = realloc(l, capacity * sizeof(char*));
        }
        l[size] = malloc(strlen(buffer) + 1);
        strcpy(l[size], buffer);
        size++;
    }

    int a = 0, b = 0;

    for (int i = 0; i < size; i++) {
        if (l[i][0] == '-' && l[i][1] == '-') {
            int num = atoi(&l[i][2]);
            for (int j = 1; j <= num; j++) {
                printf("%d.%d.%d
", a, b, j);
            }
            b++;
        } else if (l[i][0] == '-') {
            a++;
            b = 1;
        }
    }

    // Free allocated memory
    for (int i = 0; i < size; i++) free(l[i]);
    free(l);

    return 0;
}