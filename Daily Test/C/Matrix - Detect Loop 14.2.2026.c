#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int matrix[MAX][MAX];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &matrix[i][j]);

    int i, j;
    scanf("%d %d", &i, &j);
    i--; 
    j--;

    int visited[MAX][MAX] = {0};

    while(1) {
        if(i < 0 || i >= r || j < 0 || j >= c) {
            printf("NO");
            break;
        }

        if(visited[i][j]) {
            printf("YES");
            break;
        }

        visited[i][j] = 1;
        int val = matrix[i][j];

        if(val >= 0) {
            if(val % 2 == 0) i--;
            else j++;
        } else {
            if((-val) % 2 == 0) i++;
            else j--;
        }
    }

    return 0;
}