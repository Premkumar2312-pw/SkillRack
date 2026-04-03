#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while(str[i] != '\0'){
        int idx = 0;

        while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n'){
            if(idx % 2 == 0)
                printf("%c", toupper(str[i]));
            else
                printf("%c", tolower(str[i]));
            i++;
            idx++;
        }

        if(str[i] == ' ')
            printf(" ");

        i++;
    }

    return 0;
}