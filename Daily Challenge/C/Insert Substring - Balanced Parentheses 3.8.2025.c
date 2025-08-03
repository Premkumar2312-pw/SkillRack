#include <stdio.h>
#include <string.h>
int main(){
    char s1[201],s2[201],res[500];
    scanf("%s%s",s1,s2);
    int d=0,m=0,i=0;
    for(int j=0;s1[j];j++){
        d += s1[j]=='(' ? 1 : -1;
        if(d>m){ m=d; i=j; }
    }
    strncpy(res,s1,i+1); res[i+1]='\0';
    strcat(res,s2); strcat(res,s1+i+1);
    printf("%s",res);
}