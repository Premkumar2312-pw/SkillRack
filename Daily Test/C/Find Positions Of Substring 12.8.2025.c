#include <stdio.h>
#include <string.h>
int main(){
    char s[1000], sub[100][100]; int k=0;
    scanf("%s",s);
    while(scanf("%s",sub[k])!=EOF) k++;
    int n=strlen(sub[0]), len=strlen(s), idx=0;
    char p[100][100]; int pc=0;
    for(int i=0;i<len;i+=n){ strncpy(p[pc],s+i,n); p[pc][n]='\0'; pc++; }
    for(int i=0;i<k;i++){
        for(int j=0;j<pc;j++) if(strcmp(p[j],sub[i])==0){ printf("%d\n",j+1); break; }
    }
}