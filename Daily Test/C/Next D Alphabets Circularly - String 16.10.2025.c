#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[101];
    scanf("%s", s);
    int len = strlen(s);
    for(int i=0;i<len;i++){
        if(isdigit(s[i])){
            int d = s[i] - '0', cnt = 0, j = i+1;
            while(cnt < d){
                if(isalpha(s[j%len])){
                    printf("%c", s[j%len]);
                    cnt++;
                }
                j++;
            }
            printf("
");
        }
    }
    return 0;
}