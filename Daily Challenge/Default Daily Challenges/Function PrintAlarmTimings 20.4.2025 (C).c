#include <stdio.h>
#include <string.h>

void printAlarmTimings(char startTime[], char endTime[], int X)
{
    int sh, sm, eh, em;
    sscanf(startTime, "%d:%d", &sh, &sm);
    sscanf(endTime, "%d:%d", &eh, &em);

    int startMinutes = sh * 60 + sm;
    int endMinutes = eh * 60 + em;

    int current = startMinutes + X;

    while (current <= endMinutes)
    {
        int h = current / 60;
        int m = current % 60;
        printf("%02d:%02d\n", h, m);
        current += X;
    }
}