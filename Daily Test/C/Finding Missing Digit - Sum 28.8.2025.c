#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n,s,i,d; 
    scanf("%d",&n);
    char a[n][20];
    for(i=0;i<n;i++) scanf("%s",a[i]);
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(strchr(a[i],'*')){
            for(d=0;d<=9;d++){
                char temp[20]; strcpy(temp,a[i]);
                for(int k=0;k<strlen(temp);k++) if(temp[k]=='*') temp[k]=d+'0';
                int x=atoi(temp),sum=0;
                for(int j=0;j<n;j++){
                    if(j==i) sum+=x;
                    else{
                        char t[20]; strcpy(t,a[j]);
                        for(int k=0;k<strlen(t);k++) if(t[k]=='*') t[k]='0';
                        sum+=atoi(t);
                    }
                }
                if(sum==s){ strcpy(a[i],temp); goto done; }
            }
        }
    }
    done:
    for(i=0;i<n;i++) printf("%s ",a[i]);
}