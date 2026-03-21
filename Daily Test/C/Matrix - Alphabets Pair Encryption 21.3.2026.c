#include <stdio.h>
#include <string.h>

int main() {
    char key[5][5][10], s[1000], res[1000] = "";
    int i, r, c, row1, col1, row2, col2;

    for(i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            scanf("%s", key[i][j]);

    scanf("%s", s);

    for(i = 0; i < strlen(s) - 1; i += 2) {
        char ch1 = s[i], ch2 = s[i + 1];

        for(r = 0; r < 5; r++) {
            for(c = 0; c < 5; c++) {
                if(strchr(key[r][c], ch1)) {
                    row1 = r; col1 = c;
                }
                if(strchr(key[r][c], ch2)) {
                    row2 = r; col2 = c;
                }
            }
        }

        if(row1 == row2 && col1 != col2) {
            col1 = (col1 + 1) % 5;
            col2 = (col2 + 1) % 5;
        } else if(col1 == col2 && row1 != row2) {
            row1 = (row1 + 1) % 5;
            row2 = (row2 + 1) % 5;
        } else if(row1 != row2 && col1 != col2) {
            int temp = col1;
            col1 = col2;
            col2 = temp;
        }

        int len = strlen(res);
        res[len] = key[row1][col1][0];
        res[len + 1] = key[row2][col2][0];
        res[len + 2] = '\0';
    }

    printf("%s", res);
    return 0;
}