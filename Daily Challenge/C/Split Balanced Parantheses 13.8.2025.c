#include <stdio.h>
#include <string.h>
int main(){
    char s[1000],t[1000];int c=0,j=0;
    scanf("%s",s);
    for(int i=0;s[i];i++){
        t[j++]=s[i];
        c+=s[i]=='(' ? 1:-1;
        if(c==0){t[j]='\0';printf("%s\n",t);j=0;}
    }
}