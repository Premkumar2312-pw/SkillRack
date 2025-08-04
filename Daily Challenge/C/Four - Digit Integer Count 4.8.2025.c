#include <stdio.h>
#include <string.h>

int main() {
    char s[105]; 
    scanf("%s", s);
    int n = strlen(s), cnt = 0;
    char seen[10000][5]; int seenCount = 0;

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            for(int k=j+1;k<n;k++)
                for(int l=k+1;l<n;l++)
                    if(s[i]==s[j] && s[k]==s[l] && (s[k]-'0')==(s[i]-'0'+1)) {
                        char num[5]={s[i],s[j],s[k],s[l],0};
                        int unique=1;
                        for(int m=0;m<seenCount;m++)
                            if(strcmp(seen[m],num)==0) { unique=0; break; }
                        if(unique) strcpy(seen[seenCount++],num);
                    }

    printf("%d", seenCount);
    return 0;
}