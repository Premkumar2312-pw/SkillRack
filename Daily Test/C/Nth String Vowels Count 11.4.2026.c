#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main() {
    int n;
    scanf("%d\n", &n);

    char s[201], res[201];
    int max = 0;

    for(int i = 0; i < n; i++) {
        fgets(s, sizeof(s), stdin);
        int count = 0;

        for(int j = 0; s[j]; j++) {
            if(isVowel(s[j])) count++;
        }

        if(count > max) {
            max = count;
            strcpy(res, s);
        }
    }

    printf("%s", res);
    return 0;
}