#include <stdio.h>
#include <string.h>

int main() {
    char l[100][100], l1[100][100], line[100];
    int c = 0;
    while (fgets(line, sizeof(line), stdin)) {
        if (strcmp(line, "
") == 0) break;
        sscanf(line, "%s", l[c]);
        c++;
    }
    char l2[100][100];
    int l2c = 0;
    if (strlen(l[0]) == strlen(l[c-1])) {
        for (int i = 0; i < c; i++)
            strcpy(l2[i], l[i]);
        for (int i = strlen(l[0])-1; i > 0; i--) {
            for (int k = 0; k < c-1; k++)
                printf("* ");
            printf("%c
", l[c-1][i]);
        }
        for (int i = c-1; i >= 0; i--)
            printf("%s ", l2[i]);
        printf("
");
    } else {
        for (int i = 0; i < c; i++)
            strcpy(l2[i], l[i]);
        for (int i = 0; i < c; i++)
            printf("%s ", l2[i]);
        printf("
");
        for (int i = 1; i < strlen(l[c-1]); i++) {
            for (int k = 0; k < c-1; k++)
                printf("* ");
            printf("%c
", l[c-1][i]);
        }
    }
    return 0;
}