#include <stdio.h>
#include <stdbool.h>

int r, c;
void get_border(int mat[100][100], int border[400], int *n) {
    int idx = 0;
    for(int j = 0; j < c; j++) border[idx++] = mat[0][j];
    for(int i = 1; i < r-1; i++) border[idx++] = mat[i][c-1];
    for(int j = c-1; j >= 0; j--) border[idx++] = mat[r-1][j];
    for(int i = r-2; i > 0; i--) border[idx++] = mat[i][0];
    *n = idx;
}

bool is_rotation(int a[], int b[], int n) {
    for(int shift = 0; shift < n; shift++) {
        bool match = true;
        for(int i = 0; i < n; i++) {
            if(a[(i + shift) % n] != b[i]) {
                match = false;
                break;
            }
        }
        if(match) return true;
    }
    return false;
}

int main() {
    scanf("%d %d", &r, &c);
    int m1[100][100], m2[100][100];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &m1[i][j]);
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &m2[i][j]);

    int b1[400], b2[400], n1, n2;
    get_border(m1, b1, &n1);
    get_border(m2, b2, &n2);

    printf("%s\n", (n1 == n2 && is_rotation(b1, b2, n1)) ? "YES" : "NO");
    return 0;
}