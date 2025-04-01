#include <stdio.h>
#include <stdlib.h>

int main() {
    char mat[5][5][10]; 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%s", mat[i][j]);
        }
    }

    int n1, n2;
    scanf("%d %d", &n1, &n2);

    char *Clock[5][5] = {
        {"", "11", "12", "1", ""},
        {"10", "", "", "", "2"},
        {"9", "", "", "", "3"},
        {"8", "", "", "", "4"},
        {"", "7", "6", "5", "8"}
    };

    int row = 0, col = 0, flag = 0;
    
    // Find n1
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (atoi(mat[i][j]) == n1) {
                row = i, col = j, flag = 1;
                break;
            }
        }
        if (flag) break;
    }

    int hour = atoi(Clock[row][col]);
    if (hour >= 24) printf("00:");
    else if (hour < 10) printf("0%d:", hour);
    else printf("%d:", hour);

    row = col = flag = 0;
    
    // Find n2
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (atoi(mat[i][j]) == n2) {
                row = i, col = j, flag = 1;
                break;
            }
        }
        if (flag) break;
    }

    int minute = atoi(Clock[row][col]) * 5;
    if (minute >= 60) printf("00\n");
    else if (minute < 10) printf("05\n");
    else printf("%d\n", minute);

    return 0;
}