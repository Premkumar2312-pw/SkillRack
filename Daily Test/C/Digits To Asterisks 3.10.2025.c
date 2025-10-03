#include <stdio.h>
#include <string.h>
int main() {
    char n[100];
    scanf("%s", n);
    int len = strlen(n), s = 0, c[100], maxc = 0;
    for(int i=0; i<len; i++) {
        c[i]=n[i]-'0'; if(c[i]>maxc) maxc=c[i];
    }
    char m[maxc][1000]; for(int i=0;i<maxc;i++) m[i][0]='';
    for(int i=0;i<len;i++) {
        if(i>0) s+=c[i-1];
        int idx = c[i]-1, stars = s - strlen(m[idx]);
        while(stars-- > 0) strcat(m[idx], "-");
        for(int j=0;j<c[i];j++) strcat(m[idx], "*");
    }
    for(int i=maxc-1;i>=0;i--) {
        printf("%s", m[i]);
        int diff = 0;
        for(int k=0;m[i][k]!='';k++) diff++;
        for(int j=0;j<(s-diff);j++) printf("-");
        printf("
");
    }
    return 0;
}