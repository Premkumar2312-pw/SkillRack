#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int m[100][100]; // assuming n <= 100

    // Read the matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);

    // Modify the matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (!(m[i][j] > 0 && m[j][i] > 0))
                m[i][j] = 0;

    // Print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", m[i][j]);
        printf("
");
    }
    return 0;
}