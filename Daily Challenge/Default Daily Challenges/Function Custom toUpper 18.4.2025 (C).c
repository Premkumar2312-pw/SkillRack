#include <ctype.h>

void customToUpper(char str[], char fromChar, char toChar)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= fromChar && str[i] <= toChar && islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
}