#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int freq[256] = {0};

    for(int i = 0; s[i]; i++)
        freq[s[i]]++;

    int odd = 0;
    for(int i = 0; i < 256; i++)
        if(freq[i] % 2 != 0)
            odd++;

    if(odd <= 1)
        printf("yes");
    else
        printf("no");

    return 0;
}