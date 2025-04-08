#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();  // consume the newline after reading n

    while (n--) {
        char str[1001];

        // Read non-empty line
        do {
            fgets(str, sizeof(str), stdin);
        } while (str[0] == '\n');

        char *token = strtok(str, " ");
        int sum = 0, k = 0;

        // Process each token
        while (token != NULL) {
            sum += atoi(token);
            k++;
            token = strtok(NULL, " ");
        }

        printf("%d %d\n", k, sum);
    }

    return 0;
}