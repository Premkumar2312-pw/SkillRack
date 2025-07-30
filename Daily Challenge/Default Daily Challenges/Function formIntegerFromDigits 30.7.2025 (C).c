#include <string.h>
long long int formIntegerFromDigits(char *str) {
    int negCount = 0;
    char result[101] = "";
    char *token = strtok(str, ",");

    while (token != NULL) {
        if (token[0] == '-') {
            negCount++;
            strcat(result, token + 1);
        } else {
            strcat(result, token);
        }
        token = strtok(NULL, ",");
    }

    long long int num = atoll(result);
    return (negCount % 2 == 1) ? -num : num;
}