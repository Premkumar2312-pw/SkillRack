#include <stdio.h>
#include <string.h>
int main() {
    int R, C, K;
    scanf("%d %d", &R, &C);
    char city[R][101], temp[101];
    getchar();
    for (int i = 0; i < R; i++) {
        fgets(city[i], 101, stdin);
        city[i][strcspn(city[i], "
")] = 0;
    }
    scanf("%d", &K);
    char r[1024] = "";
    int len = strlen(city[0]);
    for (int i = 0; i < len; i++) {
        if (city[0][i] == '|') {
            for (int j = 0; j < K; j++) strcat(r, "|");
        } else {
            int llen = strlen(r);
            r[llen] = city[0][i];
            r[llen + 1] = '';
        }
    }
    for (int i = 0; i < R; i++) puts(r);
    return 0;
}