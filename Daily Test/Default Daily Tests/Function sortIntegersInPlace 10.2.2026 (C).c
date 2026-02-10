#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* sortIntegersInplace(char *str)
{
    char temp[1000][50];
    int nums[1000];
    int isNum[1000];
    int t = 0, n = 0;

    // Split string into tokens
    char *token = strtok(str, " ");
    while (token) {
        strcpy(temp[t], token);

        if (isdigit(token[0])) {
            nums[n++] = atoi(token);
            isNum[t] = 1;
        } else {
            isNum[t] = 0;
        }
        t++;
        token = strtok(NULL, " ");
    }

    // Sort only the integers
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] > nums[j]) {
                int x = nums[i];
                nums[i] = nums[j];
                nums[j] = x;
            }
        }
    }

    // Rebuild string
    static char result[1000];
    result[0] = '\0';

    int idx = 0;
    for (int i = 0; i < t; i++) {
        if (isNum[i]) {
            char buf[50];
            sprintf(buf, "%d", nums[idx++]);
            strcat(result, buf);
        } else {
            strcat(result, temp[i]);
        }
        if (i != t - 1)
            strcat(result, " ");
    }

    return result;
}