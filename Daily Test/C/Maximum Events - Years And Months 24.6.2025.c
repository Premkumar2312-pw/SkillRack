#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, ycnt[3000] = {0}, mcnt[12] = {0}, maxy = 0, maxm = 0;
    char month[12][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    scanf("%d", &n);
    char date[20];

    for (int i = 0; i < n; i++) {
        scanf("%s", date);
        char mon[4];
        int d, y;
        sscanf(date, "%d-%3s-%d", &d, mon, &y);

        ycnt[y]++;
        if (ycnt[y] > maxy) maxy = ycnt[y];

        for (int j = 0; j < 12; j++) {
            if (strcmp(mon, month[j]) == 0) {
                mcnt[j]++;
                if (mcnt[j] > maxm) maxm = mcnt[j];
                break;
            }
        }
    }

    for (int i = 0; i < 3000; i++) {
        if (ycnt[i] == maxy)
            printf("%d ", i);
    }
    printf("\n");
    for (int i = 0; i < 12; i++) {
        if (mcnt[i] == maxm)
            printf("%s ", month[i]);
    }
    return 0;
}