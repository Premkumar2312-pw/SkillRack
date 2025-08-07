#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
 char s[101],r[101];int i=0,j,k,p=0;
 fgets(s,101,stdin);
 while(s[i]){
  j=i;
  while(s[j]&&isalpha(s[j])==isalpha(s[i]))j++;
  for(k=j-1;k>=i;k--)r[p++]=s[k];
  i=j;
 }
 r[p]=0;
 puts(r);
}