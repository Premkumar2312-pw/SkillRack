#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* addOrConcat(char *s)
{
    static char r[10000]; 
    r[0] = 0;

    char *t = strtok(s, "+");
    while (t)
    {
        if (isdigit(t[0]))
        {
            long long sum = 0;
            while (t && isdigit(t[0]))
                sum += atoll(t), t = strtok(NULL, "+");
            sprintf(r + strlen(r), "%lld", sum);
        }
        else
            while (t && isalpha(t[0]))
                strcat(r, t), t = strtok(NULL, "+");

        if (t) strcat(r, "+");
    }
    return r;
}