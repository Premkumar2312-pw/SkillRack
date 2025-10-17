#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%100s", s);
    int n = strlen(s);
    int size = 2 * n - 1;
    char m[size][size];
    int mid = n - 1;

    // Fill matrix with '*'
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            m[i][j] = '*';

    for (int i = 0; i < n; i++) {
        m[mid - i][mid - i] = s[i];
        m[mid - i][mid] = s[i];
        m[mid - i][mid + i] = s[i];
        m[mid][mid - i] = s[i];
        m[mid][mid + i] = s[i];
        m[mid + i][mid - i] = s[i];
        m[mid + i][mid] = s[i];
        m[mid + i][mid + i] = s[i];
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%c", m[i][j]);
            if (j < size - 1) printf(" ");
        }
        printf("
");
    }
    return 0;
}