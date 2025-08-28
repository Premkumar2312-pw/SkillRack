#include <stdio.h>
#include <string.h>

int main() {
    char s1[1005], s2[1005];
    scanf("%s %s", s1, s2);
    int i=0,j=0,n=strlen(s1),m=strlen(s2),k=-1,v=1;
    while(i<n && j<m){
        if(s1[i]!=s2[j]){v=0;break;}
        int c2=0; while(j<m && s2[j]==s1[i]){c2++;j++;}
        int c1=1; while(i+1<n && s1[i+1]==s1[i]){c1++;i++;}
        if(c2%c1){v=0;break;}
        int f=c2/c1;
        if(k==-1)k=f; else if(k!=f){v=0;break;}
        i++;
    }
    printf((v && i==n && j==m)?"Yes\n":"No\n");
    return 0;
}