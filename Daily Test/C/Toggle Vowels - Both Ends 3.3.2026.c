#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch) {
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}

int main() {
    char s[1000];
    scanf("%s", s);

    while(1) {
        int first = -1, last = -1;
        int len = strlen(s);

        for(int i = 0; i < len; i++) {
            if(isVowel(s[i])) {
                if(first == -1)
                    first = i;
                last = i;
            }
        }

        if(first == -1)
            break;

        s[first] = toupper(s[first]);
        if(first != last)
            s[last] = toupper(s[last]);
    }

    printf("%s", s);
    return 0;
}