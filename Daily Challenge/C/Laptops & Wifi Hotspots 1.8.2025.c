#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    scanf("%s", s);
    int cnt=0,res[105],k=0;
    for(int i=0;s[i];i++){
        if(s[i]=='#'){
            for(int j=i-1;j>=0 && s[j]!='#';j--)
                if(s[j]=='L') res[k++]=cnt;
            cnt=0;
        } else if(s[i]=='*') cnt++;
    }
    for(int j=strlen(s)-1;j>=0 && s[j]!='#';j--)
        if(s[j]=='L') res[k++]=cnt;
    for(int i=0;i<k;i++) printf("%d ",res[i]);
}