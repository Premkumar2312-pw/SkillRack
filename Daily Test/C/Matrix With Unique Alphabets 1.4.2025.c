#include <stdio.h>
#include <ctype.h>

int main() {
    char ch1, ch2;
    scanf(" %c %c", &ch1, &ch2);

    char m[5][5];
    int index = 0;

    for (char c = 'a'; c <= 'z'; c++) {
        if (c == ch1) continue;
        m[index / 5][index % 5] = c;
        index++;
    }

    int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
    int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (m[i][j] == ch2) {
                for (int d = 0; d < 8; d++) {
                    int ni = i + dx[d], nj = j + dy[d];
                    if (ni >= 0 && ni < 5 && nj >= 0 && nj < 5) {
                        m[ni][nj] = toupper(m[ni][nj]);
                    }
                }
                break;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}