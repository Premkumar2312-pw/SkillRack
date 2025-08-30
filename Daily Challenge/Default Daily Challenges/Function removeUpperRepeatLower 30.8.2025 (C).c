#include <ctype.h>
#include <string.h>

char* removeUpperRepeatLower(char *str)
{
    static char result[10001];
    int k = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(islower(str[i]))
        {
            result[k++] = str[i];
        }
        else if(isupper(str[i]))
        {
            if(k > 0)
            {
                result[k] = result[k-1];
                k++;
            }
        }
    }
    result[k] = '\0';
    if(k == 0)
        return "-1";
    else
        return result;
}