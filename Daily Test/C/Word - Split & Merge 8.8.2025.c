#include <stdio.h>
#include <string.h>
int main(){
    char s[20][50],w[50];int k,n=0;
    while(scanf("%s",s[n])&&getchar()!='\n')n++;
    scanf("%d",&k);k--;strcpy(w,s[k]);
    int l=strlen(w),m;
    if(l%2){m=(l-1)/2;memmove(w,w+m,l-m+1);strncat(w,s[k],m+1);}
    else{m=l/2-1;memmove(w,w+m+1,l-m);strncat(w,s[k],m+1);}
    strcpy(s[k],w);
    for(int i=0;i<n;i++)printf("%s%c",s[i],i==n-1?'\n':' ');
}