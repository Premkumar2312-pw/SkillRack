#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[1000]; 
    fgets(s,1000,stdin);
    char *tok=strtok(s," \n");
    int o[100],oc=0,f=0; char arr[100][100]; int n=0;
    
    while(tok){
        strcpy(arr[n++],tok);
        if(strchr(tok,'[')&&!strchr(tok,']'))f=1;
        if(!f && tok[0]!='[')o[oc++]=atoi(tok);
        if(strchr(tok,']')&&!strchr(tok,'['))f=0;
        tok=strtok(NULL," \n");
    }

    for(int i=0;i<oc;i++)
        for(int j=i+1;j<oc;j++)
            if(o[i]>o[j]){int t=o[i];o[i]=o[j];o[j]=t;}

    f=0; int idx=0;
    for(int i=0;i<n;i++){
        if(strchr(arr[i],'[')&&!strchr(arr[i],']'))f=1,printf("%s ",arr[i]);
        else if(strchr(arr[i],']')&&!strchr(arr[i],'['))f=0,printf("%s ",arr[i]);
        else if(!f && arr[i][0]!='[')printf("%d ",o[idx++]);
        else printf("%s ",arr[i]);
    }
}