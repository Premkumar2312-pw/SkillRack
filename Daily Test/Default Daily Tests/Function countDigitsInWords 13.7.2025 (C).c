#include <string.h>
#include <ctype.h>

int countDigitsInWords(char *s)
{
    int f[26] = {0}, i, j, k, c = 0, l[26], ok;
    const char *w[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (i = 0; s[i]; i++)
        if (isalpha(s[i])) f[tolower(s[i]) - 'a']++;
    
    for (i = 0; i < 10; i++) {
        memcpy(l, f, sizeof(f));
        ok = 1;
        for (j = 0; w[i][j]; j++) {
            if (--l[w[i][j] - 'a'] < 0) {
                ok = 0;
                break;
            }
        }
        if (ok) c++; 
    }
    
    return c;
}