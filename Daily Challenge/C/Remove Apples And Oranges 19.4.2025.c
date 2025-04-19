#include <stdio.h>
#include <string.h>

int main() {
    int R, C, T;
    scanf("%d %d", &R, &C);
    char m[R][C][2];
    
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%s", m[i][j]);
    
    scanf("%d", &T);

    while (T--) {
        int a_count = 0, o_count = 0;
        for (int j = 0; j < C; j++) {
            if (strcmp(m[R-1][j], "A") == 0) a_count++;
            else if (strcmp(m[R-1][j], "O") == 0) o_count++;
        }

        char remove_char = (a_count >= o_count) ? 'A' : 'O';

        for (int j = 0; j < C; j++) {
            if (m[R-1][j][0] == remove_char)
                strcpy(m[R-1][j], "*");
        }

        for (int j = 0; j < C; j++) {
            int empty = 0;
            char temp[R][2];
            int idx = 0;

            for (int i = 0; i < R; i++) {
                if (strcmp(m[i][j], "*") != 0)
                    strcpy(temp[idx++], m[i][j]);
                else
                    empty++;
            }

            for (int i = 0; i < empty; i++)
                strcpy(m[i][j], "*");
            for (int i = 0; i < idx; i++)
                strcpy(m[i+empty][j], temp[i]);
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++)
            printf("%s ", m[i][j]);
        printf("\n");
    }
    return 0;
}