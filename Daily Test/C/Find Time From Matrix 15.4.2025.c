#include <stdio.h>
#include <string.h>

int main() {
    char m[12][12][3];
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            scanf("%s", m[i][j]);

    int total[144];
    char result[144][10];
    int count = 0;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (strcmp(m[i][j], "A") == 0 || strcmp(m[i][j], "P") == 0) {
                int h = i + 1;
                int mins = j * 5;
                int th;
                if (h == 12)
                    th = strcmp(m[i][j], "A") == 0 ? 0 : 12;
                else
                    th = strcmp(m[i][j], "A") == 0 ? h : h + 12;

                total[count] = th * 60 + mins;
                int disp_h = (h == 12 || h == 0) ? 12 : h;
                sprintf(result[count], "%02d:%02d %sM", disp_h, mins, m[i][j]);
                count++;
            }
        }
    }

    for (int i = 0; i < count-1; i++) {
        for (int j = i+1; j < count; j++) {
            if (total[i] > total[j]) {
                int t = total[i];
                total[i] = total[j];
                total[j] = t;

                char temp[10];
                strcpy(temp, result[i]);
                strcpy(result[i], result[j]);
                strcpy(result[j], temp);
            }
        }
    }

    for (int i = 0; i < count; i++)
        printf("%s\n", result[i]);

    return 0;
}