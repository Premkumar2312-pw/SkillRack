#include <string.h>

void transposeMatrix(char *fileName) {
    FILE *fp;
    fp = fopen(fileName, "r");
    int matrix[1000][100];
    char line[1024];
    int r = 0, c = 0;

    while (fgets(line, sizeof(line), fp)) {
        char *token = strtok(line, " ");
        int col = 0;
        while (token) {
            matrix[r][col++] = atoi(token);
            token = strtok(NULL, " ");
        }
        if (r == 0) {
            c = col;
        }
        r++;
    }
    fclose(fp);

    fp = fopen(fileName, "w");
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            fprintf(fp, "%d", matrix[i][j]);
            if (i != r - 1) {
                fprintf(fp, " ");
            }
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
}