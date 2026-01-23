#include <stdio.h>
#include <string.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int box[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &box[i][j]);

    char ins[1000];
    scanf("%s", ins);

    int visited[r][c];
    memset(visited, 0, sizeof(visited));

    int i = 0, j = 0;
    int res = box[0][0];
    visited[0][0] = 1;

    for (int k = 0; k < strlen(ins); k++) {
        if (ins[k] == 'E') j++;
        if (ins[k] == 'W') j--;
        if (ins[k] == 'N') i--;
        if (ins[k] == 'S') i++;

        if (visited[i][j] && box[i][j] > 0) {
            box[i][j]--;
            res--;
        } else {
            res += box[i][j];
            visited[i][j] = 1;
        }
    }

    printf("%d", res);
    return 0;
}