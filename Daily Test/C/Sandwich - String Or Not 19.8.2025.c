#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    char s[101]; scanf("%s", s);
    int n = strlen(s);
    int distinct[256]={0}, d=0;
    for(int i=0;i<n;i++) if(!distinct[(int)s[i]]) {distinct[(int)s[i]]=1; d++;}
    if(d!=2){ printf("NO"); return 0; }
    for(int i=1;i<=(n-1)/2;i++){
        bool ok=1;
        for(int j=0;j<i;j++) if(s[j]!=s[n-i+j]) ok=0;
        char c1=s[0], c2=s[i];
        for(int j=0;j<i;j++) if(s[j]!=c1) ok=0;
        for(int j=i;j<n-i;j++) if(s[j]!=c2) ok=0;
        if(c1==c2) ok=0;
        if(ok){ printf("YES"); return 0; }
    }
    printf("NO");
}