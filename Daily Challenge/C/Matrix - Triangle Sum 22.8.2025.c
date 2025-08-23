#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** stringToMatrix(int N, char *str1, char *str2) {
    char **mat = (char**)malloc(N * sizeof(char*));
    for (int i = 0; i < N; i++) {
        mat[i] = (char*)malloc(N * sizeof(char));
    }

    int idx1 = 0, idx2 = 0, flag = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (flag == 1) {
                if (idx1 < strlen(str1))
                    mat[i][j] = str1[idx1++];
                else
                    mat[i][j] = str2[idx2++];
            } else {
                if (idx2 < strlen(str2))
                    mat[i][j] = str2[idx2++];
                else
                    mat[i][j] = str1[idx1++];
            }
            flag = 1 - flag;
        }
    }
    return mat;
}

int main() {
    int N;
    char str1[100], str2[100];
    scanf("%d", &N);
    scanf("%s %s", str1, str2);

    char **matrix = stringToMatrix(N, str1, str2);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%c ", matrix[i][j]);
        printf("\n");
    }
    return 0;
}