#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *wd[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
char cal[100][100][5];
int dc[32] = {0};

int main() {
    int r = 0, c = 0;
    char line[1000];

    while (fgets(line, sizeof(line), stdin)) {
        int col = 0;
        char *tok = strtok(line, " \n");
        while (tok) {
            strcpy(cal[r][col++], tok);
            tok = strtok(NULL, " \n");
        }
        r++;
        c = col;
    }

    int pos = -1;
    if (c == 7) {
        for (int i = 0; i < r && pos == -1; i++) {
            for (int j = 0; j < c; j++) {
                if (isdigit(cal[i][j][0]) || cal[i][j][0] == '#') {
                    pos = j;
                    break;
                }
            }
        }
    } else {
        for (int j = 0; j < c && pos == -1; j++) {
            for (int i = 0; i < r; i++) {
                if (isdigit(cal[i][j][0]) || cal[i][j][0] == '#') {
                    pos = i;
                    break;
                }
            }
        }
    }

    char *d2w[32];
    for (int i = 1; i <= 31; i++) {
        d2w[i] = wd[(pos + i - 1) % 7];
    }

    int hc = 0;
    if (c == 7) {
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++) {
                if (strcmp(cal[i][j], "#") == 0)
                    hc++;
                else if (isdigit(cal[i][j][0]))
                    dc[atoi(cal[i][j])]++;
            }
    } else {
        for (int j = 0; j < c; j++)
            for (int i = 0; i < r; i++) {
                if (strcmp(cal[i][j], "#") == 0)
                    hc++;
                else if (isdigit(cal[i][j][0]))
                    dc[atoi(cal[i][j])]++;
            }
    }

    for (int i = 1; i <= 31; i++) {
        if (dc[i] == 1)
            hc++;
    }

    int found = 0;
    for (int i = 1; i <= hc; i++) {
        if (dc[i] == 0) {
            printf("%d %s\n", i, d2w[i]);
            found = 1;
        }
    }

    if (!found)
        printf("-1\n");

    return 0;
}