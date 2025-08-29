#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[101];
    scanf("%s", s);
    int w[26];
    w[0]=0; w[1]=1;
    for(int i=2; i<26; i++) w[i] = w[i-2]+w[i-1];
    int sum=0, n = strlen(s);
    for(int i=0; i<n; i++) {
        char c = tolower(s[i]);
        sum += w[c-'a'];
    }
    printf("%d\n", sum);
    return 0;
}
