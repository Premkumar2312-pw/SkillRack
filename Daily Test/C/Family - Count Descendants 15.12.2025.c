#include <stdio.h>
#include <string.h>

char father[100][21], child[100][21];
int n;

int dfs(char *p) {
    int cnt = 1;
    for (int i = 0; i < n; i++)
        if (strcmp(father[i], p) == 0)
            cnt += dfs(child[i]);
    return cnt;
}

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%s %s", child[i], father[i]);

    char person[21];
    scanf("%s", person);

    printf("%d", dfs(person));
    return 0;
}