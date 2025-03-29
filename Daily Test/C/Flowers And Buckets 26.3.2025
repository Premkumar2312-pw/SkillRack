#include <stdio.h>

int is_sea(char arr[][100], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] == '#')
                return 0;
        }
    }
    return 1;
}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    char arr[100][100];

    for (int i = 0; i < r; i++)
        scanf("%s", arr[i]);

    int count = 1;

    while (!is_sea(arr, r, c)) {
        if (count % 2 != 0) {
            for (int i = 0; i < r; i++) {
                for (int j = c - 1; j >= 0; j--) {
                    if (arr[i][j] == '#') {
                        if ((i - 1 >= 0 && arr[i - 1][j] == '#') || (i + 1 < r && arr[i + 1][j] == '#'))
                            break;
                        arr[i][j] = '*';
                        if (j - 1 >= 0 && arr[i][j - 1] == '#')
                            arr[i][j - 1] = '*';
                        break;
                    }
                }
            }
        } else {
            for (int j = 0; j < c; j++) {
                for (int i = r - 1; i >= 0; i--) {
                    if (arr[i][j] == '#') {
                        if ((j - 1 >= 0 && arr[i][j - 1] == '#') || (j + 1 < c && arr[i][j + 1] == '#'))
                            break;
                        arr[i][j] = '*';
                        if (i - 1 >= 0 && arr[i - 1][j] == '#')
                            arr[i - 1][j] = '*';
                        break;
                    }
                }
            }
        }
        count++;
    }

    printf("%d\n", count - 1);
    return 0;
}
