char* mergeThreeStringValues(char *str1, char *str2, char *str3)
{
    static char r[10000];
    int i=0, j=0, k=0, l=0;

    while(str1[i])
    {
        char ch = str1[i];
        int c = 0;

        while(str1[i] == ch) { c++; i++; }
        while(str2[j] == ch) { c++; j++; }
        while(str3[k] == ch) { c++; k++; }

        while(c--) r[l++] = ch;
    }

    r[l] = '\0';
    return r;
}